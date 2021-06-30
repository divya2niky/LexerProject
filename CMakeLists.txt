cmake_minimum_required(VERSION 3.10.2)
project(Project1_Starter_Code)
set(CMAKE_CXX_STANDARD 17)
add_executable(Project1_Starter_Code
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h
        )