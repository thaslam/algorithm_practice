#include <iostream>
#include "quick_sort.h"

int main()
{
  std::vector<int> v(8);
  v[0] = 6;
  v[1] = 8;
  v[2] = 3;
  v[3] = 9;
  v[4] = 2;
  v[5] = 1;
  v[6] = 5;
  v[7] = 7;

  alg::QuickSort<int>* sortAlg = new alg::QuickSort<int>();
  sortAlg->sort(v, 0, 7);
  for (int i=0; i<v.size(); i++)
  {
    std::cout << v[i] << std::endl;
  }

  delete sortAlg;
  return 0;
}
