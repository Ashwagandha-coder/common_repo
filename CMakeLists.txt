cmake_minimum_required(VERSION 3.21)
project(abstract_repo)

set(CMAKE_CXX_STANDARD 23)

add_executable(abstract_repo common/main.cpp common/test.cpp algo/valid_parentheses/valid_parentheses.cpp algo/valid_parentheses/valid_parentheses.h algo/valid_parentheses/alt/alt.cpp algo/valid_parentheses/alt/alt.h algo/valid_parentheses/other_solution/other.cpp algo/valid_parentheses/other_solution/other.h "algo/Climbing Stairs /base.cpp" "algo/Climbing Stairs /base.h")
