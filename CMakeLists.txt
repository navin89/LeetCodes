cmake_minimum_required(VERSION 3.16)
project(LeetCodes)

set(CMAKE_CXX_STANDARD 17)

# -- Heap --
#add_executable(LeetCodes heap/heapEx.cpp)

# -- Trees --
#add_executable(LeetCodes
#                trees/Queue.h trees/Queue.cpp
#                trees/Node.h
#                trees/Tree.h trees/Tree.cpp
#                trees/treePlay.cpp)


# -- Queues --
#add_executable(LeetCodes
#                queues/QueueArray.h queues/QueueArray.cpp
#                queues/QueueCircular.h queues/QueueCircular.cpp
#                queues/QueueLinkedList.h queues/QueueLinkedList.cpp
#                queues/queuePlay.cpp)



# -- LINKED LIST --
#add_executable(LeetCodes linkedLists/displayLinkedList.c)

# --- MATRIX TUTORIAL ---
#add_executable(LeetCodes matrix/diagonalMatrixC.c)
add_executable(LeetCodes
                matrix/cppDiagonal/Diagonal.cpp matrix/cppDiagonal/Diagonal.h
                matrix/cppDiagonal/LowerTri.h matrix/cppDiagonal/LowerTri.cpp
                matrix/cppDiagonal/matrixPlay.cpp)


# --- STRING TUTORIAL ---
#add_executable(LeetCodes strings/permutationStr.cpp)
#add_executable(LeetCodes strings/findAnagram.cpp)
#add_executable(LeetCodes strings/findDupBitwiseOps.cpp)
#add_executable(LeetCodes strings/findDupInStrings.cpp)
#add_executable(LeetCodes strings/duplicatesEx.c)
#add_executable(LeetCodes strings/palindromeEx.c)
#add_executable(LeetCodes strings/reversingStringEx.c)

# ---- SORTING ALGORITHMS ---
#add_executable(LeetCodes sortingAlgos/sortingMain.cpp)