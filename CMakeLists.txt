cmake_minimum_required(VERSION 3.15)

# Name of the project
project(transitSystem)  

# Add the source files and headers to the project
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Add an executable target
add_executable(transitSystem ${SOURCES} ${HEADERS})

# Set include directories
target_include_directories(transitSystem PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set the target for the executable
set_target_properties(transitSystem PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Create a custom target for compiling and running the project
add_custom_target(run COMMAND ninja && ./bin/transitSystem DEPENDS transitSystem WORKING_DIRECTORY ${CMAKE_BINARY_DIR})