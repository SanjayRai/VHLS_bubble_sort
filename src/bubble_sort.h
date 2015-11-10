#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_

#include "ap_fixed.h"


template<class sorter_data_type, int NUM_ELEMENTS> 
class bubble_sort_engine {

public :
    bubble_sort_engine(void){};
//    void bubble_sort (sorter_data_type in_data[NUM_ELEMENTS], sorter_data_type out_data[NUM_ELEMENTS]);
    void bubble_sort (sorter_data_type in_data[NUM_ELEMENTS], sorter_data_type out_data[NUM_ELEMENTS]) {
            sorter_data_type temp;
            sorter_data_type data[NUM_ELEMENTS];
            for(int i=0;i<NUM_ELEMENTS;++i) {
                data[i] = in_data[i];
            }
            for(int step=0;step<(NUM_ELEMENTS-1);++step) {
                for(int i=0;i<(NUM_ELEMENTS-step-1);++i)
                {
                    if(data[i] > data[i+1])   /* To sort in descending order, change > to < in this line. */
                    {
                        temp=data[i];
                        data[i] = data[i+1];
                        data[i+1] = temp;
                    }
                }
            }
            for(int i=0;i<NUM_ELEMENTS;++i) {
                out_data[i] = data[i];
            }
        }


};

#endif //BUBBLE_SORT_H_
