﻿# CMakeList.txt: проект CMake для CMakeProject2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject2 "main.cpp" "inout.h" "read.cpp" "print.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
