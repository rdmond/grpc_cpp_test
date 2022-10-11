# windows下编译grpc
### gRPC c++ 编译
- 拉取 gRPC 库 `git clone https://github.com/grpc/grpc.git`
- 获取 gRPC 第三方依赖 `cd grpc` `git submodule update --init`
- 编译安装 gRPC `md build-build` `cd build-build` `cmake .. -DgRPC_INSTALL=ON`
- `cmake --build . --target install --config Release`
- `cmake --build . --target install --config Debug`
- 或者可以通过打开 `grpc.sln` 进行编译
- gRPC 默认安装在 C:\Program Files (x86)\grpc 目录。

### 准备proto文件
```proto
syntax = "proto3";
package helloworld;

service Greeter {
  rpc SayHello(HelloRequest) returns(HelloReply ) {}
}

message HelloRequest{
  int32 id = 1;
  string title = 2;
}

message HelloReply {
  string msg = 1;
  int32 status = 2;
}
```

### protoc 生成 cpp文件
```
protoc --cpp_out=.  --grpc_out=. --plugin=protoc-gen-grpc="D:\cpplib\grpc_build\bin/grpc_cpp_plugin.exe"  *.proto
```

### CMakeLists.txt配置
```cmake
#release
set(INC_DIR "D:/cpplib/grpc_release/include")
set(LINK_DIR "D:/cpplib/grpc_release/lib")

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_library(hellolibrary ./abi/hello.grpc.pb.cc ./abi/hello.grpc.pb.h  ./abi/hello.pb.cc ./abi/hello.pb.h )

add_executable(grpc_cpp_test main.cpp )
target_link_libraries(grpc_cpp_test  hellolibrary  grpc++_reflection.lib  grpc++.lib  libprotobuf.lib  grpc.lib  zlibstatic.lib  cares.lib  Advapi32.lib  address_sorting.lib  ws2_32.lib  crypt32.lib  re2.lib  upb.lib  absl_raw_hash_set.lib  absl_hashtablez_sampler.lib  absl_hash.lib  absl_city.lib  absl_low_level_hash.lib  absl_statusor.lib  gpr.lib  absl_bad_variant_access.lib  absl_status.lib  absl_strerror.lib  absl_random_distributions.lib  absl_random_seed_sequences.lib  absl_random_internal_pool_urbg.lib  absl_random_internal_randen.lib  absl_random_internal_randen_hwaes.lib  absl_random_internal_randen_hwaes_impl.lib  absl_random_internal_randen_slow.lib  absl_random_internal_platform.lib  absl_random_internal_seed_material.lib  absl_random_seed_gen_exception.lib  absl_cord.lib  absl_bad_optional_access.lib  absl_cordz_info.lib  absl_cord_internal.lib  absl_cordz_functions.lib  absl_exponential_biased.lib  absl_cordz_handle.lib  absl_str_format_internal.lib  absl_synchronization.lib  absl_stacktrace.lib  absl_symbolize.lib  absl_debugging_internal.lib  absl_demangle_internal.lib  absl_graphcycles_internal.lib  absl_malloc_internal.lib  absl_time.lib  absl_strings.lib  absl_throw_delegate.lib  absl_int128.lib  absl_strings_internal.lib  absl_base.lib  absl_spinlock_wait.lib  absl_raw_logging_internal.lib  absl_log_severity.lib  absl_civil_time.lib  absl_time_zone.lib  -ignore:4221  ssl.lib  crypto.lib  kernel32.lib  user32.lib  gdi32.lib  winspool.lib  shell32.lib  ole32.lib  oleaut32.lib  uuid.lib  comdlg32.lib  advapi32.lib)

```

### main.cpp
```c++
 #include <iostream>
 #include <grpcpp/ext/proto_server_reflection_plugin.h>
 #include <grpcpp/grpcpp.h>
 #include "./abi/hello.pb.h"
 #include "./abi/hello.grpc.pb.h"
 
 using grpc::Server;
 using grpc::ServerBuilder;
 using grpc::ServerContext;
 using grpc::Status;
 
 
 using helloworld::Greeter;
 using helloworld::HelloReply;
 using helloworld::HelloRequest;
 
 class GreeterServiceImpl final : public Greeter::Service {
     Status SayHello(ServerContext* context, const HelloRequest* request,
                     HelloReply* reply) override {
         std::string prefix("Hello ");
         std::cout << request->title() << std::endl;
         reply->set_msg(prefix + request->title());
         return Status::OK;
     }
 };
 
 int main() {
     std::string server_address("0.0.0.0:50051");
     GreeterServiceImpl service;
 
     grpc::EnableDefaultHealthCheckService(true);
     grpc::reflection::InitProtoReflectionServerBuilderPlugin();
     ServerBuilder builder;
     // Listen on the given address without any authentication mechanism.
     builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
     // Register "service" as the instance through which we'll communicate with
     // clients. In this case it corresponds to an *synchronous* service.
     builder.RegisterService(&service);
     // Finally assemble the server.
     std::unique_ptr<Server> server(builder.BuildAndStart());
     std::cout << "Server listening on " << server_address << std::endl;
 
     // Wait for the server to shutdown. Note that some other thread must be
     // responsible for shutting down the server for this call to ever return.
     server->Wait();
     return 0;
 }
```







