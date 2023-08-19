cmake_minimum_required(VERSION 3.22.1)

project(pip_practice)

# add 2 files exec for 2 proc
add_executable(proc1_exec ../app/proc1/proc1.c)
add_executable(proc2_exec ../app/proc2/proc2.c)