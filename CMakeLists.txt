cmake_minimum_required(VERSION 3.13)
project(projektpo)

set(CMAKE_CXX_STANDARD 14)

add_executable(projektpo main.cpp Board.cpp Board.h Hero.cpp Hero.h Warrior.cpp Warrior.h Rogue.cpp Rogue.h Item.cpp Item.h)