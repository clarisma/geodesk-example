project(example)

include(FetchContent)
FetchContent_Declare(geodesk GIT_REPOSITORY 
    https://github.com/clarisma/libgeodesk.git
    GIT_TAG v2)
FetchContent_MakeAvailable(geodesk)
set(BUILD_SHARED_LIBS OFF)

add_executable(example main.cpp)
target_link_libraries(example PRIVATE geodesk)

