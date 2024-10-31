cmake_minimum_required( VERSION 3.20 )
project( bisect VERSION 3.0 )

add_executable( bisect )
target_sources( bisect PRIVATE zeroclasstest.cpp  zeroclasslib.cpp)

install( TARGETS bisect DESTINATION . )

find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )
target_include_directories(
	${PROJECT_NAME} PUBLIC
	${CATCH2_INCLUDE_DIRS}
	)
target_link_directories(
	${PROJECT_NAME} PUBLIC
	${CATCH2_LIBRARY_DIRS}
	)
target_link_libraries(
	${PROJECT_NAME} PUBLIC
	${CATCH2_LIBRARIES}
	)

set_target_properties(
	${PROJECT_NAME} PROPERTIES
	BUILD_RPATH   "${CATCH2_LIBRARY_DIRS}"
	INSTALL_RPATH "${CATCH2_LIBRARY_DIRS}"
    )

install( TARGETS ${PROJECT_NAME} DESTINATION . )
