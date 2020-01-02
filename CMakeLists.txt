cmake_minimum_required(VERSION 2.8.11)

# Project meta
cmake_policy(SET CMP0048 NEW)
project(todocli)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(
        ${CMAKE_SOURCE_DIR}/src
)

# External submodule packages
find_package(Git QUIET)
if (GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if (GIT_SUBMODULE)
        message(STATUS "Submodule updating")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                RESULT_VARIABLE GIT_SUBMODULE_RESULT)
        if (NOT GIT_SUBMODULE_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMODULE_RESULT}, please checkout submodules")
        endif ()
    endif ()
endif ()
add_subdirectory(extern/CLI11)

add_executable(todocli ./src/todocli.cc)
target_link_libraries(todocli CLI11::CLI11)

install(TARGETS todocli DESTINATION /usr/local/bin)