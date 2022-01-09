add_library(codewars-lib SHARED)
target_include_directories(codewars-lib PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
target_sources(codewars-lib PRIVATE ${CMAKE_SOURCE_DIR}/src/codewars.cpp)

add_executable(Test codewarsTest.cpp)
target_link_libraries(Test PRIVATE codewars-lib ut)