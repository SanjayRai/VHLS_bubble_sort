#ifndef BUBBLE_SORT_WRAPPER_H_
#define BUBBLE_SORT_WRAPPER_H_

#define NUM_ITR 6
#define NUM_ELE 16
#include "ap_fixed.h"
typedef ap_fixed<64,32>  sorter_data_t;
//typedef int sorter_data_t;
void bubble_sort_wrapper ( sorter_data_t in_data[NUM_ELE], sorter_data_t out_data[NUM_ELE]);

#endif // BUBBLE_SORT_WRAPPER_H_
