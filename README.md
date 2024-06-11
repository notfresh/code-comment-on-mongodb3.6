# 说明
mongodb3.6的代码注释
说明:  
===================================  
MongoDB是一个基于分布式文件存储的数据库。由C++语言编写。旨在为WEB应用提供可扩展的高性能数据存储解决方案。  
是一个介于关系数据库和非关系数据库之间的产品，是非关系数据库当中功能最丰富，最像关系数据库的。他支持的数据结构非常松散，是类似json的bson格式，因此可以存储比较复杂的数据类型。Mongo最大的特点是他支持的查询语言非常强大，其语法有点类似于面向对象的查询语言，几乎可以实现类似关系数据库单表查询的绝大部分功能，而且还支持对数据建立索引。  
  
源码中文已注释代码列表如下：
===================================   
#### boost-asio网络库/定时器源码实现注释(只注释mongodb相关实现的asio库代码)(100%注释):   
 *   [asio/include/asio/detail/impl/scheduler.ipp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/impl/scheduler.ipp) 
 *   [asio/include/asio/detail/impl/epoll_reactor.ipp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/impl/epoll_reactor.ipp) 
 *   [asio/include/asio/detail/scheduler.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/scheduler.hpp) 
 *   [asio/include/asio/detail/impl/scheduler.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/impl/scheduler.hpp) 
 *   [asio/include/asio/detail/timer_queue.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/timer_queue.hpp) 
 *   [asio/include/asio/detail/timer_queue_base.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/timer_queue_base.hpp) 
 *   [asio/include/asio/detail/timer_queue_set.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/timer_queue_set.hpp) 
 *   [asio/include/asio/detail/impl/timer_queue_set.ipp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/impl/timer_queue_set.ipp) 
 *   [asio/include/asio/detail/epoll_reactor.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/epoll_reactor.hpp) 
 *   [asio/include/asio/detail/impl/epoll_reactor.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/impl/epoll_reactor.hpp) 
 *   [asio/include/asio/impl/read.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/impl/read.hpp) 
 *   [asio/include/asio/impl/write.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/impl/write.hpp) 
 *   [asio/include/asio/basic_socket_acceptor.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation//asio/include/asio/basic_socket_acceptor.hpp) 
 *   [asio/include/asio/detail/reactive_socket_service.hpp)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/reactive_socket_service.hpp) 
 *   [asio/include/asio/basic_socket_acceptor.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/basic_socket_acceptor.hpp) 
 *   [asio/include/asio/basic_stream_socket.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/basic_stream_socket.hpp) 
 *   [asio/include/asio/detail/reactive_socket_service_base.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/reactive_socket_service_base.hpp) 
 *   [asio/include/asio/detail/reactive_socket_recv_op.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/reactive_socket_recv_op.hpp) 
 *   [asio/include/asio/detail/reactor_op.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/reactor_op.hpp) 
 *   [asio/include/asio/detail/scheduler_operation.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/scheduler_operation.hpp) 
 *   [asio/include/asio/detail/deadline_timer_service.hpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/third_party/asio-chinese-annotation/asio/include/asio/detail/deadline_timer_service.hpp) 

#### mongodb网络传输模块(transport)处理实现(100%注释):     
###### transport_layer传输层子模块: 
 *   [transport_layer_asio.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/transport_layer_asio.h) 
 *   [transport_layer_asio.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/transport_layer_asio.cpp) 
 *   [transport_layer_manager.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/transport_layer_manager.h) 
 *   [transport_layer_manager.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/transport_layer_manager.cpp) 
 *   [transport_layer.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/transport_layer.h) 
###### Ticket数据收发回调处理子模块(100%注释): 
 *   [ticket_asio.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/ticket_asio.h) 
 *   [ticket_asio.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/ticket_asio.cpp) 
 *   [ticket_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/ticket_impl.h) 
###### Session会话子模块(100%注释): 
 *   [session_asio.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/session_asio.h) 
 *   [session_asio.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/session_asio.cpp) 
 *   [session.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/session.h) 
###### service_state_machine状态机子模块(100%注释): 
 *   [service_state_machine.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_state_machine.h) 
 *   [service_state_machine.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_state_machine.cpp) 
###### service_executor服务运行(工作线程模型)子模块(100%注释): 
 *   [service_executor.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_executor.h) 
 *   [service_executor_adaptive.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_executor_adaptive.cpp) 
 *   [service_executor_adaptive.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_executor_adaptive.h) 
 *   [service_executor_synchronous.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_executor_synchronous.cpp) 
 *   [service_executor_synchronous.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_executor_synchronous.h) 
###### service_entry_point_impl服务入口子模块(100%注释): 
 *   [service_entry_point.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_entry_point.h) 
 *   [service_entry_point_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_entry_point_impl.cpp) 
 *   [service_entry_point_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_entry_point_impl.h) 
 *   [service_entry_point_utils.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_entry_point_utils.cpp) 
 *   [service_entry_point_utils.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/transport/service_entry_point_utils.h) 

#### message/DbMessage/OpMsgRequest协议处理(100%注释): 
 *   [message.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/net/message.h) 
 *   [message.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/net/message.cpp) 
 *   [dbmessage.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/dbmessage.h) 
 *   [dbmessage.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/dbmessage.cpp) 
 *   [factory.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/rpc/factory.cpp) 
 *   [factory.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/rpc/factory.h) 
 *   [op_msg.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/net/op_msg.cpp) 
 *   [op_msg.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/net/op_msg.h) 
 
#### 时间嘀嗒及系统级定时器实现(100%注释): 
 *   [tick_source.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/tick_source.h) 
 *   [system_tick_source.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/system_tick_source.cpp) 
 *   [system_tick_source.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/system_tick_source.h) 
 *   [timer.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/timer.cpp) 
 *   [timer.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/util/timer.h) 

#### mongod/mongos服务入口处理(100%注释): 
 *   [service_entry_point_mongod.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/service_entry_point_mongod.h) 
 *   [service_entry_point_mongod.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/service_entry_point_mongod.cpp) 
 *   [service_entry_point_mongos.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/service_entry_point_mongos.h) 
 *   [service_entry_point_mongos.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/service_entry_point_mongos.cpp)

#### command命令处理模块(注释完毕,命令太多，请参考前面的《command命令处理模块源码实现》): 
 *   [commands.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands.h) 
 *   [commands.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands.cpp) 
 *   [write_commands.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/write_commands/write_commands.cpp) 
 *   [cluster_write_cmd.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/commands/cluster_write_cmd.cpp)
 *   [strategy.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/commands/strategy.cpp)

#### db.serverStatus()相关统计(注释完毕):
 *   [server_status.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status.cpp) 
 *   [server_status.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status.h) 
 *   [server_status_internal.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status_internal.cpp) 
 *   [server_status_internal.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status_internal.h) 
 *   [server_status_metric.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status_metric.cpp) 
 *   [server_status_metric.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/server_status_metric.h) 

#### stats相关统计(注释完毕):
 *   [counters.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/counters.cpp) 
 *   [counters.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/counters.h) 
 *   [operation_latency_histogram.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/operation_latency_histogram.cpp) 
 *   [operation_latency_histogram.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/operation_latency_histogram.h) 
 *   [top.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/top.cpp) 
 *   [top.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/top.h) 
 *   [latency_server_status_section.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/latency_server_status_section.cpp) 
 *   [toplatency_server_status_sectionh](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/stats/latency_server_status_section.h) 


#### OpMsgRequest和写write_ops:(insert、update、delete)转换操作(100%注释): :
 *   [write_ops_gen.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/ops/write_ops_gen.cpp) 
 *   [write_ops_gen.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/ops/write_ops_gen.h) 

#### write写模块:  
###### write处理入口(100%注释): 
 *   [write_commands_common.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/write_commands/write_commands_common.cpp) 
 *   [write_commands_common.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/write_commands/write_commands_common.h) 
 *   [write_commands.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/commands/write_commands/write_commands.cpp) 
  
###### OpMsgRequest和写write_ops:(insert、update、delete)转换操作(100%注释): :
 *   [write_ops_parsers.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/ops/write_ops_parsers.cpp) 
 *   [write_ops_parsers.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/ops/write_ops_parsers.h) 
 *   [write_ops_gen.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/ops/write_ops_gen.cpp) 
 *   [write_ops_gen.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/ops/write_ops_gen.h) 
   
###### 增删改处理(100%注释): :
 *   [write_ops_exec.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/ops/write_ops_exec.cpp) 
 *   [write_ops_exec.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/ops/write_ops_exec.h) 
  
#### query请求处理模块:  
###### query_request请求解析和canonical_query规范化转换操作(核心流程注释完毕): 
 *   [query_request.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/query_request.cpp) 
 *   [query_request.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/query_request.h) 
 *   [canonical_query.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/canonical_query.cpp) 
 *   [canonical_query.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/canonical_query.h) 
 *   [parsed_projection.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/parsed_projection.cpp) 
 *   [parsed_projection.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/parsed_projection.h) 
 
###### MatchExpression tree生成及优化过程(核心流程注释完毕): 
 *   [expression_parser.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression_parser.cpp) 
 *   [expression_parser.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression_parser.h) 
 *   [expression.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression.cpp) 
 *   [expression.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression.h) 
 *   [expression_tree.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression_tree.cpp) 
 *   [expression_tree.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/matcher/expression_tree.h) 

###### get_executor获取PlanExecutor(核心流程注释完毕): 
 *   [get_executor.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.cpp) 
 *   [get_executor.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.h) 

###### QueryPlannerIXSelect实现MatchExpression tree相关node关联对应RelevantTag(核心流程注释完毕): 
 *   [planner_ixselect.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_ixselect.cpp) 
 *   [planner_ixselect.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_ixselect.h) 

###### plan_enumerator轮询枚举每个查询所有的候选索引信息(核心流程注释完毕): 
 *   [plan_enumerator.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_enumerator.cpp) 
 *   [plan_enumerator.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_enumerator.h) 

###### index_tag相关(核心流程注释完毕): 
 *   [index_tag.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/index_tag.cpp) 
 *   [index_tag.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/index_tag.h) 

###### 生成QuerySolutionNode tree及querysolution(核心流程注释完毕): 
 *   [planner_access.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_access.cpp) 
 *   [planner_access.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_access.h) 
 *   [planner_analysis.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_analysis.cpp) 
 *   [planner_analysis.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/planner_analysis.h) 
 *   [query_planner.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/query_planner.cpp) 
 *   [query_planner.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/query_planner.h) 

###### get_executor根据querysolurion生成PlanStage(核心流程注释完毕): 
 *   [get_executor.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.cpp) 
 *   [get_executor.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.h) 
 
###### PlanStage(核心流程注释完毕): 
 *   [plan_stage.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/plan_stage.cpp) 
 *   [plan_stage.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/plan_stage.h) 
 *   [plan_stats.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/plan_stats.cpp) 
 *   [plan_stats.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/plan_stats.h) 
 *   [stage_builder.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/stage_builder.cpp) 
 *   [stage_builder.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/stage_builder.h) 
 *   [multi_plan.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/multi_plan.cpp)   
 *   [multi_plan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/multi_plan.h)  
 *   [subplan.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/subplan.cpp)   
 *   [subplan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/subplan.h)  
 *   [stage_types.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/stage_types.cpp) 
 *   [collection_scan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/collection_scan.h) 
 *   [collection_scan.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/collection_scan.cpp) 
 *   [collection_scan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/collection_scan.h) 
 *   [index_scan.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/index_scan.cpp) 
 *   [index_scan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/index_scan.h) 
 *   [fetch.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/fetch.cpp) 
 *   [fetch.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/fetch.h) 
 *   [sort.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/sort.cpp) 
 *   [sort.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/sort.h)
 *   [sort_key_generator.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/sort_key_generator.cpp) 
 *   [sort_key_generator.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/sort_key_generator.h) 
 *   [projection.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/projection.cpp) 
 *   [projection.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/projection.h)   
 *   [limit.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/limit.cpp)   
 *   [limit.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/limit.h)   
 *   [skip.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/skip.cpp)   
 *   [skip.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/skip.h)  
 *   [cached_plan.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/cached_plan.cpp)   
 *   [cached_plan.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/cached_plan.h) 
 *   [update.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/update.cpp)   
 *   [update.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/update.h)  
 *   [delete.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/delete.cpp)   
 *   [delete.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/delete.h) 
 *   [......](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/exec/)  
  
  
#### storage存储模块:  
##### catalog中间层相关实现: 
###### database中间层接口相关(重要接口注释): 
 *   [database.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database.cpp) 
 *   [database.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database.h) 
 *   [database_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_impl.h) 
 *   [database_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_impl.cpp) 
 *   [database_holder.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_holder.h) 
 *   [database_holder.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_holder.cpp) 
 *   [database_holder_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_holder_impl.cpp) 
 *   [database_holder_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_holder_impl.h) 
 *   [database_catalog_entry.h (通过这里和KVStorageEngine关联)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/database_catalog_entry.h) 
  
###### collection中间层接口相关(重要接口注释): 
 *   [collection.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection.cpp) 
 *   [collection.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection.h) 
 *   [collection_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_impl.h) 
 *   [collection_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_impl.cpp) 
 *   [collection_info_cache.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_info_cache.h) 
 *   [collection_info_cache.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_info_cache.cpp) 
 *   [collection_info_cache_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_info_cache_impl.cpp) 
 *   [collection_info_cache_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_info_cache_impl.h) 
 *   [collection_options.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_options.cpp) 
 *   [collection_options.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_options.h) 
 *   [collection_catalog_entry.h (通过这里和KVStorageEngine关联)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/collection_catalog_entry.h) 
  
###### index中间层接口相关(重要接口注释): 
 *   [index_catalog.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog.cpp) 
 *   [index_catalog.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog.h) 
 *   [index_catalog_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_impl.h) 
 *   [index_catalog_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_impl.cpp) 
 *   [index_catalog_entry.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_entry.h) 
 *   [index_catalog_entry.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_entry.cpp) 
 *   [index_catalog_entry_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_entry_impl.cpp) 
 *   [index_catalog_entry_impl.h (通过这里和CollectionInfoCache、CollectionCatalogEntry、IndexAccessMethod等关联)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_catalog_entry_impl.h) 
 *   [index_create.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_create.cpp) 
 *   [index_create.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_create.h) 
 *   [index_create_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_create_impl.cpp) 
 *   [index_create_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/index_create_impl.h) 
  
##### storage层相关实现(重要接口注释): 
 *   [record_data.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/record_data.cpp) 
 *   [record_data.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/record_data.h) 
 *   [record_store.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/record_store.h) 
 *   [sorted_data_interface.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/sorted_data_interface.h) 
 *   [storage_engine.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_engine.h) 
 *   [storage_engine_lock_file.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_engine_lock_file.cpp) 
 *   [storage_engine_lock_file.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_engine_lock_file.h) 
 *   [storage_engine_metadata.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_engine_metadata.cpp) 
 *   [storage_engine_metadata.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_engine_metadata.h) 
 *   [storage_init.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_init.cpp) 
 *   [storage_options.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_options.h) 
 *   [storage_options.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/storage_options.cpp) 
  
###### kv引擎管理注册(重要接口注释): 
 *   [kv_storage_engine.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_storage_engine.cpp) 
 *   [kv_storage_engine.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_storage_engine.h) 
 *   [kv_catalog.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_catalog.h) 
 *   [kv_catalog.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_catalog.cpp) 
 *   [kv_collection_catalog_entry.h(通过这里和catalog中间层collection衔接)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_collection_catalog_entry.h) 
 *   [kv_collection_catalog_entry.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_collection_catalog_entry.cpp) 
 *   [kv_database_catalog_entry.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_database_catalog_entry.cpp) 
 *   [kv_database_catalog_entry.h(通过这里和catalog中间层database衔接)](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_database_catalog_entry.h) 
 *   [kv_database_catalog_entry_base.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_database_catalog_entry_base.cpp) 
 *   [kv_database_catalog_entry_base.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/kv_database_catalog_entry_base.h) 
   
###### wiredtiger存储引擎接口相关(重要接口注释): 
 *   [wiredtiger_global_options.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_global_options.cpp) 
 *   [wiredtiger_global_options.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_global_options.h) 
 *   [wiredtiger_init.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_init.h) 
 *   [wiredtiger_init.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_init.cpp) 
 *   [wiredtiger_kv_engine.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_kv_engine.h) 
 *   [wiredtiger_kv_engine.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_kv_engine.cpp) 
 *   [wiredtiger_parameters.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_parameters.cpp) 
 *   [wiredtiger_parameters.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_parameters.h) 
 *   [wiredtiger_record_store.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_record_store.cpp) 
 *   [wiredtiger_record_store.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_record_store.h) 
 *   [wiredtiger_recovery_unit.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_recovery_unit.h) 
 *   [wiredtiger_recovery_unit.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_recovery_unit.cpp) 
 *   [wiredtiger_server_status.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_server_status.cpp) 
 *   [wiredtiger_server_status.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_server_status.h) 
 *   [wiredtiger_session_cache.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_session_cache.cpp) 
 *   [wiredtiger_session_cache.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_session_cache.h) 
 *   [wiredtiger_size_storer.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_size_storer.h) 
 *   [wiredtiger_size_storer.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_size_storer.cpp) 
 *   [wiredtiger_util.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_util.cpp) 
 *   [wiredtiger_util.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/catalog/wiredtiger_util.h) 

   
###### plan_ranker对每个候选solution打分，选出最优索引(核心流程注释完毕): 
 *   [plan_ranker.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_ranker.cpp) 
 *   [plan_ranker.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_ranker.h) 
 
###### get_executor根据querysolurion生成PlanStage(核心流程注释完毕): 
 *   [get_executor.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.cpp) 
 *   [get_executor.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/get_executor.h) 
 
###### plan_executor执行器(核心流程注释完毕): 
 *   [plan_executor.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_executor.cpp) 
 *   [plan_executor.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_executor.h) 
 
###### plan_cache plan缓存(核心流程注释完毕): 
 *   [plan_cache.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_cache.cpp) 
 *   [plan_cache.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/query/plan_cache.h) 
 *   [plan_cache_commands.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/commands/plan_cache_commands.cpp) 
 *   [plan_cache_commands.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/build/opt/mongo/db/commands/plan_cache_commands.h) 
 
#### shard分片源码实现(注释进行中):   
###### 分布式锁实现源码注释分析(100%注释): 
 *   [dist_lock_catalog_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog_impl.cpp) 
 *   [dist_lock_catalog_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog_impl.h) 
 *   [dist_lock_manager.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_manager.cpp) 
 *   [dist_lock_catalog.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog.h) 
 *   [dist_lock_catalog_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog_impl.cpp) 
 *   [dist_lock_catalog_impl.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog_impl.h) 
 *   [dist_lock_catalog_impl.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_catalog_impl.cpp) 
 *   [dist_lock_manager.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/dist_lock_manager.cpp) 
 *   [type_lockpings.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_lockpings.cpp) 
 *   [type_lockpings.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_lockpings.h) 
 *   [type_locks.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_locks.cpp) 
 *   [type_locks.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_locks.h) 
 *   [configsvr_enable_sharding_command.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/s/config/configsvr_enable_sharding_command.cpp) 

###### 代理定期更新config.mongos实现源码注释分析(100%注释): 
 *   [sharding_uptime_reporter.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/sharding_uptime_reporter.cpp)
 *   [sharding_uptime_reporter.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/sharding_uptime_reporter.h)
 *   [type_mongos.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_mongos.cpp)
 *   [type_mongos.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_mongos.h)

###### cfg复制集库表结构管理(config.databases、config.collections)(100%注释): 
 *   [type_collection.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_collection.cpp)
 *   [type_collection.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_collection.h)
 *   [type_database.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_database.cpp)
 *   [type_database.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/catalog/type_database.h)

###### 分片片建shard key(100%注释): 
 *   [shard_key_pattern.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/shard_key_pattern.cpp)
 *   [shard_key_pattern.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/s/shard_key_pattern.h)
 *   [keypattern.cpp](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/keypattern.cpp)
 *   [keypattern.h](https://gitee.com/notfresh/code-comment-on-mongodb3.6/blob/master/mongo/src/mongo/db/keypattern.h)