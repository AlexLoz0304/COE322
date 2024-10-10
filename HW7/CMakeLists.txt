cmake_minimum_required( VERSION 3.20 )
project( point VERSION 1.0 )

message( "Using sources: point.cpp" )
add_executable( point )
target_sources( point PRIVATE point.cpp )

target_compile_features( point PRIVATE cxx_std_17 )
install( TARGETS point DESTINATION . )