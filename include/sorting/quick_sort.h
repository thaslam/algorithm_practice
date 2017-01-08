#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <vector>

namespace alg
{
  template<class T>
  class QuickSort
  {
    public:
      void sort(std::vector<T>& list, int start, int end)
      {
          if (list.size() == 0 || (end-start) <= 1) return;
          int pivot = start + ((end-start) / 2);
          T pivotValue = list[pivot];
          int i = start;
          int j = end;

          while (i < j)
          {
            while (list[i] < pivotValue) i++;
            while (list[j] > pivotValue) j--;

            if (i < j)
            {
              std::swap(list[i], list[j]);
              i++;
              j--;
            }
          }
          if (i > start) sort(list, start, j);
          if (j < end) sort(list, i, end);
      }
  };
}

#endif