add_library(test-driven-development-cpp)
target_include_directories(test-driven-development-cpp INTERFACE public)
target_sources(test-driven-development-cpp PRIVATE money.cpp dollar.cpp franc.cpp)