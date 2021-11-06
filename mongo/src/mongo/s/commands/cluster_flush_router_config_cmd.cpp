/**
 *    Copyright (C) 2015 MongoDB Inc.
 *
 *    This program is free software: you can redistribute it and/or  modify
 *    it under the terms of the GNU Affero General Public License, version 3,
 *    as published by the Free Software Foundation.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Affero General Public License for more details.
 *
 *    You should have received a copy of the GNU Affero General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the GNU Affero General Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 */

#include "mongo/platform/basic.h"

#include "mongo/db/commands.h"
#include "mongo/s/catalog_cache.h"
#include "mongo/s/grid.h"

namespace mongo {
namespace {


//可以参考https://mongoing.com/archives/75945  MongoDB 路由表刷新导致响应慢场景解读
//https://mongoing.com/archives/77370  万亿级MongoDB集群的路由优化之路

	
//forcePrimaryRefreshAndWaitForReplication：
//	mongos向mongod shard server主节点发送forceRoutingTableRefresh命令，shard server主节点收到后，
//	在FlushRoutingTableCacheUpdates::run中处理，注意这个是内部命令
//还有一个外部强制路由刷新db.adminCommand({"flushRouterConfig":1})
class FlushRouterConfigCmd : public BasicCommand {
public:
    FlushRouterConfigCmd() : BasicCommand("flushRouterConfig", "flushrouterconfig") {}

    virtual bool slaveOk() const {
        return true;
    }

    virtual bool adminOnly() const {
        return true;
    }


    virtual bool supportsWriteConcern(const BSONObj& cmd) const override {
        return false;
    }

    virtual void help(std::stringstream& help) const {
        help << "flush all router config";
    }

    virtual void addRequiredPrivileges(const std::string& dbname,
                                       const BSONObj& cmdObj,
                                       std::vector<Privilege>* out) {
        ActionSet actions;
        actions.addAction(ActionType::flushRouterConfig);
        out->push_back(Privilege(ResourcePattern::forClusterResource(), actions));
    }

    virtual bool run(OperationContext* opCtx,
                     const std::string& dbname,
                     const BSONObj& cmdObj,
                     BSONObjBuilder& result) {
        //Grid::catalogCache  catalogCache::purgeAllDatabases
        Grid::get(opCtx)->catalogCache()->purgeAllDatabases();

        result.appendBool("flushed", true);
        return true;
    }

} flushRouterConfigCmd;

}  // namespace
}  // namespace mongo
