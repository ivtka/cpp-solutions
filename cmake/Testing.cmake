function(make_lib name)
  add_library(${name} SHARED)
  target_include_directories(${name} PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
  target_sources(${name} PRIVATE ${CMAKE_SOURCE_DIR}/src/${name}.cpp)
endfunction()

function(make_test name)
  make_lib(${name})
  add_executable(${name}Test ${name}Test.cpp)
  target_link_libraries(${name}Test PRIVATE ${name} ut)  
endfunction(make_test name)