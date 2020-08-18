cmake_minimum_required(VERSION 3.16)
project(LeetCodes)

set(CMAKE_CXX_STANDARD 17)


# --- MATRIX TUTORIAL ---
#add_executable(LeetCodes matrix/diagonalMatrixC.c)
add_executable(LeetCodes matrix/cppDiagonal/ matrix/cppDiagonal/Diagonal.cpp matrix/cppDiagonal/Diagonal.h)


# --- STRING TUTORIAL ---
#add_executable(LeetCodes strings/permutationStr.cpp)
#add_executable(LeetCodes strings/findAnagram.cpp)
#add_executable(LeetCodes strings/findDupBitwiseOps.cpp)
#add_executable(LeetCodes strings/findDupInStrings.cpp )


# ---- SORTING ALGORITHMS ---
#add_executable(LeetCodes sortingAlgos/sortingMain.cpp)