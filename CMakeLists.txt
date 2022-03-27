project(WASM_TEST CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../deploy)
file(GLOB_RECURSE SRC src/*.cpp src/*.hpp)
add_executable(${PROJECT_NAME} ${SRC})