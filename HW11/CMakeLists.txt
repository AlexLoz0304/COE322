cmake_minimum_required( VERSION 3.20 )
project( newtonroottemp VERSION 1.0 )

message( "Using sources: newtonroottemp.cpp" )
add_executable( newtonroottemp )
target_sources( newtonroottemp PRIVATE newtonroottemp.cpp )

target_compile_features( newtonroottemp PRIVATE cxx_std_17 )
install( TARGETS newtonroottemp DESTINATION . )
