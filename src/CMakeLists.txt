cmake_minimum_required(VERSION 2.8)

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR})
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR})

message( "myapp_SOURCE_DIR points to " ${myapp_SOURCE_DIR} )

# for now... doing all integration at the application-layer

include_directories("${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_SOURCE_DIR}/../prettyprint/include" 
	"${PROJECT_SOURCE_DIR}/../squareroot/include"
   "${PROJECT_SOURCE_DIR}/../power/include" )

link_directories("${PROJECT_SOURCE_DIR}/src" 
	"${PROJECT_SOURCE_DIR}/../prettyprint/lib" 
	"${PROJECT_SOURCE_DIR}/../squareroot/lib"
   "${PROJECT_SOURCE_DIR}/../power/lib" )

add_executable(myapp myapp.c)

target_link_libraries(myapp libsquareroot.a libpower.a libprettyprint.a m)

install(TARGETS myapp DESTINATION "${PROJECT_SOURCE_DIR}/bin")
