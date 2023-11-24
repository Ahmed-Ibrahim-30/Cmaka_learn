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

function(optionalFunctions Name1)
    message("Hello ${${Name1}}")
    message("ARGC = ${ARGC}")#Total Count of Argument (Optional+named)
    message("ARGV = ${ARGV}")# List of All Argument (Optional+named)
    message("ARGN = ${ARGN}")#List od Optional Argument
    if (DEFINED ARGV0) # First Argument
        message("Found First Argument")
    endif ()
    if (DEFINED ARGV1) # Second Argument
        message("Found Second Argument")
    endif ()
    if (DEFINED ARGV2) # Third Argument
        message("Found Third Argument")
    endif ()
    if (DEFINED ARGV3) # Third Argument
        message("Found Forth Argument")
    endif ()
endfunction()
optionalFunctions(Name Bob Ahmed)

message("********* Scope OF Functions **************")
set(test Ahmed)
function(scope)
    message("Before test = ${test}")#this is copy of parent variable test = Ahmed
    set(test Ali)#Modify value of copy variable
    set(test Fahmy PARENT_SCOPE)#Modify value of Parent variable
    message("After test = ${test}")#this is copy of parent variable test = Ali
endfunction()

message("Before Function .. text = ${test}")# test = Ahmed
scope()
message("Before Function .. text = ${test}")# test = Fahmy
#Hello Ahmed
#Found Parameter
