set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(CHIP8 main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3 imgui)