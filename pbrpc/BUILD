cc_library(
    name = 'sofa-pbrpc',
    srcs = [
        'binary_rpc_request.cc',
        'binary_rpc_request_parser.cc',
        'block_wrappers.cc',
        'buffer.cc',
        'builtin_service_impl.cc',
        'common.cc',
        'common_internal.cc',
        'compressed_stream.cc',
        'dynamic_rpc_channel_impl.cc',
        'gzip_stream.cc',
        'http_rpc_request.cc',
        'http_rpc_request_parser.cc',
        'lz4.cc',
        'mock_test_helper.cc',
        'pbjson.cc',
        'rpc_channel.cc',
        'rpc_client.cc',
        'rpc_client_impl.cc',
        'rpc_controller.cc',
        'rpc_endpoint.cc',
        'rpc_error_code.cc',
        'rpc_request.cc',
        'rpc_request_parser.cc',
        'rpc_server.cc',
        'rpc_server_impl.cc',
        'simple_rpc_channel_impl.cc',
        'string_utils.cc',
        'thread_group.cc',
        'timeout_manager.cc',
        'timeout_manager_impl.cc',
        'rpc_option.pb.cc',
        'rpc_meta.pb.cc',
        'builtin_service.pb.cc',
    ],
    deps = [
        '//thirdparty/boost:system',
        '//thirdparty/protobuf:protobuf',
        '//thirdparty/glog:glog',
        '//thirdparty/snappy:snappy',
        ':rpc_option_proto',
        ':rpc_meta_proto',
        ':builtin_service_proto',
        '#pthread',
        '#z',
    ],
)

proto_library(
    name = 'rpc_option_proto',
    srcs = 'rpc_option.proto'
)

proto_library(
    name = 'rpc_meta_proto',
    srcs = 'rpc_meta.proto',
    deps = ':rpc_option_proto'
)

proto_library(
    name = 'builtin_service_proto',
    srcs = 'builtin_service.proto',
    deps = ':rpc_option_proto'
)

cc_binary(
    name = 'sofa-pbrpc-client',
    srcs = [
        'http-agent/http_agent.cc',
        'http-agent/sofa_pbrpc_client.cc',
    ],
    deps = ':sofa-pbrpc',
)

