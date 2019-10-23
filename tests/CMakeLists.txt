# test cmake

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(test_royal_bin_utils TestsRoyalBinUtils.cpp)
target_link_libraries(test_royal_bin_utils PRIVATE royals)
add_test(test_royal_bin_utils test_royal_bin_utils)