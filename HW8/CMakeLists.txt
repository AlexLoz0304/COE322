cmake_minimum_required( VERSION 3.20 )
project( pascal VERSION 1.0 )

message( "Using sources: pascal.cpp" )
add_executable( pascal )
target_sources( pascal PRIVATE pascal.cpp )

target_compile_features( pascal PRIVATE cxx_std_17 )
install( TARGETS pascal DESTINATION . )
