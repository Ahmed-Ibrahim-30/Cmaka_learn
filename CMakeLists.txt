cmake_minimum_required(VERSION 3.26)
project(cmake_learn VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(Name "Ahmed Ibrahim")
set(Age 22)
set(Height 140)
set(Friends Saleh Tarek Fahmy)
add_subdirectory(rectangles)
add_subdirectory(print)
#message("Hello ${Name} ,my Age = ${Age} , my Height = ${Height}, My Friends = "${Friends})

add_executable(cmake_learn main.cpp)
target_link_libraries(cmake_learn PUBLIC rect_lib print_lib)
function(printHello Name Age)
    message("My Name is ${Name} , My Age is ${Age}")
endfunction()
printHello(ahmed 22)
set(Name Ahmed)
set(Age 22)
printHello(Name Age)#My Name is Name , My Age is Age
printHello(${Name} ${Age})#My Name is Ahmed , My Age is 22

set(Name "Ahmed")
function(test_function Name)
    message("1 - My ${Name} is ${${Name}}")
endfunction()

function(test_function Name)
    message("2 - My ${Name} is ${${Name}}")
endfunction()
test_function(Name)#2 - My Name is Name
_test_function(Name)#1 - My Name is Name

