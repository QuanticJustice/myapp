cmake_minimum_required(VERSION 2.8)

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR})
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR})

message( "squareroot_SOURCE_DIR points to " ${myapp_SOURCE_DIR} )

include_directories("${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_SOURCE_DIR}/../prettyprint/include" 
	"${PROJECT_SOURCE_DIR}/../squareroot/include" )

link_directories("${PROJECT_SOURCE_DIR}/src" 
	"${PROJECT_SOURCE_DIR}/../prettyprint/lib" 
	"${PROJECT_SOURCE_DIR}/../squareroot/lib" )

add_executable(myapp myapp.c)

target_link_libraries(myapp libsquareroot.a libprettyprint.a m)

install(TARGETS myapp DESTINATION "${PROJECT_SOURCE_DIR}/bin")
