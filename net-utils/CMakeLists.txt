cmake_minimum_required (VERSION 3.20)

project("net-utils" VERSION 0.64 DESCRIPTION "utility for net library" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest CONFIG REQUIRED)
enable_testing()

file(GLOB_RECURSE NET_UTILS_SOURCE "source/*.hpp" "source/*.cpp")

if(WIN32)
    message(STATUS "Target os: win32")
    set(TARGET_OS "win")
elseif(UNIX)
    message(STATUS "Target os: linux")
    set(TARGET_OS "linux")
endif()

add_executable(${PROJECT_NAME} ${NET_UTILS_SOURCE})

target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
#target_link_libraries(${PROJECT_NAME} PUBLIC GTest::GTest GTest::Main)

target_include_directories(${PROJECT_NAME} PRIVATE "source")

#set_target_properties(${PROJECT_NAME} 
#    PROPERTIES 
#    PUBLIC_HEADER "${HDR_FILES}")

message(STATUS "INSTALL PREFIX: ${CMAKE_INSTALL_PREFIX}")

#add_subdirectory(tests)

# TODO: finish configure project
# fix execution install folder, does not work
message(STATUS "Build path: ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}")

install(TARGETS ${PROJECT_NAME}
        CONFIGURATIONS Debug
        RUNTIME DESTINATION "debug/net-utils/bin")
install(TARGETS ${PROJECT_NAME}
        CONFIGURATIONS Release
        RUNTIME DESTINATION "release/net-utils/bin")