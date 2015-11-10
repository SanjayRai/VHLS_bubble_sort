#include "bubble_sort.h"
#include "bubble_sort_wrapper.h"

void bubble_sort_wrapper ( sorter_data_t in_data[NUM_ELE], sorter_data_t out_data[NUM_ELE]){

    bubble_sort_engine<sorter_data_t,NUM_ELE> my_bubble_sorter;

    my_bubble_sorter.bubble_sort(in_data, out_data);
}

