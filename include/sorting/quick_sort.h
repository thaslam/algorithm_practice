#ifndef QUICKSORT_H
#define QUICKSORT_H

namespace alg
{
  template<class T>
  class QuickSort
  {
    public:
      void sort(std:vector<T>& list, int start, int end)
      {
          /*
          create pivot
          sort left
          sort right
          sort all
          */
          if (list.size() == 0 || list.size() == 1) return;
          int pivot = list.size() / 2;
          T pivotValue = list[pivot];
          int i = start;
          int j = end;
          
          while (list[i] <= pivotValue) i++;
          while (list[j] >= pivotValue) j--;

          if (list[i] > list[j])
          {
            T swap = list[i];
            list[i] = list[j];
            list[j] = swap;

            i++;
            j--;
          }

          sort(list, start, i);
          sort(list, j, end);
      }
  }
}

#endif