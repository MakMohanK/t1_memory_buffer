cmake_minimum_required(VERSION 3.11)
project(MyProject)

include(FetchContent)

# Define FetchContent parameters for fmt
set(FMT_VERSION "master")
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG ${FMT_VERSION}
)

# master is updated package 
# 7.0.0 has api deprication

# Fetch fmt
FetchContent_MakeAvailable(fmt)

# Now you can use fmt as part of your project
add_executable(MyExecutable main.cpp)
target_link_libraries(MyExecutable PRIVATE fmt::fmt)