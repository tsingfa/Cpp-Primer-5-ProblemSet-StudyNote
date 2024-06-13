cmake_minimum_required(VERSION 3.28)
project(Cpp_Primer_5_ProblemSet_StudyNote)

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_SOURCE_DIR}) # 从项目根路径下 include

# 添加可执行文件
add_executable(main_program main.cpp)
# 第 2章：变量与基本类型
add_executable(ch02_ex04 ch02_Variables_and_Basic_Types/ex04.cpp)
add_executable(ch02_ex08 ch02_Variables_and_Basic_Types/ex08.cpp)
add_executable(ch02_ex18 ch02_Variables_and_Basic_Types/ex18.cpp)
add_executable(ch02_ex20 ch02_Variables_and_Basic_Types/ex20.cpp)
add_executable(ch02_ex25 ch02_Variables_and_Basic_Types/ex25.cpp)
add_executable(ch02_ex27 ch02_Variables_and_Basic_Types/ex27.cpp)
add_executable(ch02_ex34 ch02_Variables_and_Basic_Types/ex34.cpp)
add_executable(ch02_ex41_1 ch02_Variables_and_Basic_Types/ex41_1.cpp)
add_executable(ch02_ex41_2 ch02_Variables_and_Basic_Types/ex41_2.cpp)
add_executable(ch02_ex42_1 ch02_Variables_and_Basic_Types/ex42_1.cpp)
add_executable(ch02_ex42_2 ch02_Variables_and_Basic_Types/ex42_2.cpp)
# 第 3章：字符串、向量和数组
add_executable(ch03_ex01_1 ch03_Strings_Vectors_and_Arrays/ex01_1.cpp)
add_executable(ch03_ex01_2 ch03_Strings_Vectors_and_Arrays/ex01_2.cpp)
add_executable(ch03_ex01_3 ch03_Strings_Vectors_and_Arrays/ex01_3.cpp)
add_executable(ch03_ex01_4 ch03_Strings_Vectors_and_Arrays/ex01_4.cpp)
add_executable(ch03_ex02_1 ch03_Strings_Vectors_and_Arrays/ex02_1_stringcin.cpp)
add_executable(ch03_ex02_2 ch03_Strings_Vectors_and_Arrays/ex02_2_stringcin.cpp)
add_executable(ch03_ex04_1 ch03_Strings_Vectors_and_Arrays/ex04_1_strcompare.cpp)
add_executable(ch03_ex04_2 ch03_Strings_Vectors_and_Arrays/ex04_2_strcompare.cpp)
add_executable(ch03_ex05_1 ch03_Strings_Vectors_and_Arrays/ex05_1_strsum.cpp)
add_executable(ch03_ex05_2 ch03_Strings_Vectors_and_Arrays/ex05_2_strsum.cpp)
add_executable(ch03_ex06 ch03_Strings_Vectors_and_Arrays/ex06_str_for.cpp)
add_executable(ch03_ex07 ch03_Strings_Vectors_and_Arrays/ex07.cpp)
add_executable(ch03_ex08_1 ch03_Strings_Vectors_and_Arrays/ex08_1.cpp)
add_executable(ch03_ex08_2 ch03_Strings_Vectors_and_Arrays/ex08_2.cpp)
add_executable(ch03_ex10 ch03_Strings_Vectors_and_Arrays/ex10_str.cpp)
add_executable(ch03_ex14 ch03_Strings_Vectors_and_Arrays/ex14_ivector.cpp)
add_executable(ch03_ex15 ch03_Strings_Vectors_and_Arrays/ex15_svector.cpp)
add_executable(ch03_ex16 ch03_Strings_Vectors_and_Arrays/ex16_sizevector.cpp)
# 第 4章：表达式

# 第 5章：语句

# 第 6章：函数

# 第 7章：类


add_executable(ch03_ex17 ch03_Strings_Vectors_and_Arrays/ex17.cpp)
