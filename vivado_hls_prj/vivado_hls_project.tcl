open_project vhls_prj
set_top bubble_sort_wrapper
add_files ../src/bubble_sort.cpp
add_files ../src/bubble_sort.h
add_file ../src/bubble_sort_wrapper.h
add_file ../src/bubble_sort_wrapper.cpp
add_files -tb ../src/bubble_sort.h
add_files -tb ../src/tb_bubble_sort.cpp
open_solution "solution1"
set_part {xcku040-ffva1156-2-e}
create_clock -period 5 -name default
source "../src/directives.tcl"
csynth_design
exit
