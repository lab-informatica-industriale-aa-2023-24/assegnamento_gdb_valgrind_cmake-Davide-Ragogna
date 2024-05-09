cmake_minimum_required( VERSION 3.10.2 )
project( Create_and_test_linked_library
VERSION 0.9
DESCRIPTION "assegnamento parte valgrind con cmake" )
if (MSVC)

add_compile_options(/W4 /WX)
else()
add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_subdirectory( app )