#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <vector>

namespace alg
{
    template <class T>
    class SelectionSort
    {
        public:
            void sort(std::vector<T>& list)
            {
                if (list.size() == 0) return;

                for (int i=0; i<list.size(); i++)
                {
                    int smallest = i;
                    // find smallest value
                    for (int j=i; j<list.size(); j++)
                    {
                        if (list[j] < list[smallest]) 
                        {
                            smallest = j;
                        }
                    }
                    // swap small value to the front
                    T swap = list[i];
                    list[i] = list[smallest];
                    list[smallest] = swap;
                }
            }
    };
}

#endif

