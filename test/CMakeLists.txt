function(make_test name)
  add_executable(${name}Test ${name}Test.cpp)
  target_link_libraries(${name}Test PRIVATE ${name} ut)  
endfunction(make_test name)


make_test(SumFct)
make_test(RGBToHex)