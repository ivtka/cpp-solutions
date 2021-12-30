function(make_lib name)
  add_library(${name} SHARED)
  target_include_directories(${name} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
  target_sources(${name} PRIVATE ${name}.cpp)
endfunction(make_lib name)

make_lib(SumFct)
make_lib(RGBToHex)