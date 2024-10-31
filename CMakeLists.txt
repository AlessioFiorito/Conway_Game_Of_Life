cmake_minimum_required(VERSION 3.10)
project(Conway_Game_of_Life)

set(CMAKE_CXX_STANDARD 20)

# Trouver raylib
find_package(raylib REQUIRED)

# Ajouter l'exécutable
add_executable(MyRaylibExecutable main.cpp)

# Lier raylib
target_link_libraries(MyRaylibExecutable raylib)
