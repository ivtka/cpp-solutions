add_library(SumFct SHARED)
target_include_directories(SumFct PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
target_sources(SumFct PRIVATE SumFct.cpp)