cmake_minimum_required(VERSION 3.19)
project(grpc_cpp_test)

set(CMAKE_CXX_STANDARD 14)

set(INC_DIR "D:/cpplib/grpc_release/include")
set(LINK_DIR "D:/cpplib/grpc_release/lib")

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_library(hellolibrary ./abi/hello.grpc.pb.cc ./abi/hello.grpc.pb.h  ./abi/hello.pb.cc ./abi/hello.pb.h )

add_executable(grpc_cpp_test main.cpp )
target_link_libraries(grpc_cpp_test  hellolibrary  grpc++_reflection.lib  grpc++.lib  libprotobuf.lib  grpc.lib  zlibstatic.lib  cares.lib  Advapi32.lib  address_sorting.lib  ws2_32.lib  crypt32.lib  re2.lib  upb.lib  absl_raw_hash_set.lib  absl_hashtablez_sampler.lib  absl_hash.lib  absl_city.lib  absl_low_level_hash.lib  absl_statusor.lib  gpr.lib  absl_bad_variant_access.lib  absl_status.lib  absl_strerror.lib  absl_random_distributions.lib  absl_random_seed_sequences.lib  absl_random_internal_pool_urbg.lib  absl_random_internal_randen.lib  absl_random_internal_randen_hwaes.lib  absl_random_internal_randen_hwaes_impl.lib  absl_random_internal_randen_slow.lib  absl_random_internal_platform.lib  absl_random_internal_seed_material.lib  absl_random_seed_gen_exception.lib  absl_cord.lib  absl_bad_optional_access.lib  absl_cordz_info.lib  absl_cord_internal.lib  absl_cordz_functions.lib  absl_exponential_biased.lib  absl_cordz_handle.lib  absl_str_format_internal.lib  absl_synchronization.lib  absl_stacktrace.lib  absl_symbolize.lib  absl_debugging_internal.lib  absl_demangle_internal.lib  absl_graphcycles_internal.lib  absl_malloc_internal.lib  absl_time.lib  absl_strings.lib  absl_throw_delegate.lib  absl_int128.lib  absl_strings_internal.lib  absl_base.lib  absl_spinlock_wait.lib  absl_raw_logging_internal.lib  absl_log_severity.lib  absl_civil_time.lib  absl_time_zone.lib  -ignore:4221  ssl.lib  crypto.lib  kernel32.lib  user32.lib  gdi32.lib  winspool.lib  shell32.lib  ole32.lib  oleaut32.lib  uuid.lib  comdlg32.lib  advapi32.lib
)