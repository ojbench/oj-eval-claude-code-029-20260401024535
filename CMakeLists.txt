cmake_minimum_required(VERSION 3.10)
project(malloc_allocator C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -O2")

# Create executable from mm.c and mdriver.c
add_executable(code mm.c mdriver.c)
