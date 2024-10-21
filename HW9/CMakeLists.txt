cmake_minimum_required( VERSION 3.20 )
project( linklist VERSION 1.0 )

message( "Using sources: linklist.cpp" )
add_executable( linklist )
target_sources( linklist PRIVATE linklist.cpp )

target_compile_features( linklist PRIVATE cxx_std_17 )
install( TARGETS linklist DESTINATION . )
