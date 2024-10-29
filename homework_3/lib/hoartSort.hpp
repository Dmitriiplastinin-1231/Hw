#ifndef LIB_HOARTSORT_HPP_
#define LIB_HOARTSORT_HPP_

namespace hoart
{
    extern void sort(int* arr, const int size);
    
    static int __partOfSort(int* arr, int l, int r);
    static void __hoartSort(int* arr, int l, int r);
}

#endif 