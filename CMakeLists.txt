project("Basic STD")

add_library(string src/string.cpp)
add_library(vector src/vector.cpp)
add_executable(main tests/main.cpp)
target_link_libraries(main LINK_PUBLIC string vector)