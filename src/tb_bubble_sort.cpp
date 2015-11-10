/*C Program To Sort data in ascending order using bubble sort.*/
#include <stdio.h>
#include "bubble_sort_wrapper.h"
#include "bubble_sort.h"
#include "ap_fixed.h"
//

int main()
{

    sorter_data_t data[NUM_ELE];
    sorter_data_t out_data[NUM_ELE];
    sorter_data_t orig_data[NUM_ELE];
    sorter_data_t *data_p;
    bool i_state  = 0;


     for (int itn = 0; itn < NUM_ITR; itn++) {
        if (itn == 0) {
            for(int i=0;i<NUM_ELE;++i)
            {
                if (i == (NUM_ELE-1)) {
                    orig_data[i] = 111.32;
                } else if (i == 0) {
                    orig_data[i] = -55.45;
                } else {
                    if (i_state) {
                        orig_data[i] = ((float)i/2.3);
                    } else {
                        orig_data[i] = ((float)i/-2.3);
                    }
                }
                data[i] = orig_data[i];
                out_data[i] = 0; 
                i_state = not i_state;
            }
        } else {
            for(int i=0;i<NUM_ELE;++i)
            {
                if (i == (NUM_ELE-1)) {
                    orig_data[i] = 111.32;
                } else if (i == 0) {
                    orig_data[i] = -55.45;
                } else {
                    if (i_state) {
                        orig_data[i] = ((float)i*itn)/2.3;
                    } else {
                        orig_data[i] = ((float)i*itn)/-2.3;
                    }
                }
                data[i] = orig_data[i];
                out_data[i] = 0; 
                i_state = not i_state;
            }
        }
        //my_bubble_sorter.bubble_sort(data, out_data);
        bubble_sort_wrapper(data, out_data);
        printf("In ascending order: \n");
        for(int i=0;i<NUM_ELE;++i)
             printf("%f :: %f \n",(float)orig_data[i], (float)out_data[i]);
             printf("\n");
    }
    return 0;
}

