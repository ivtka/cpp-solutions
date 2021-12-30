add_library(ut INTERFACE)
target_include_directories(ut INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
target_compile_definitions(ut INTERFACE cxx_std_20)
