#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
template <typename T>
static int partition(T a[], int l, int h)
{
    T pivot = a[h];
    int i = l-1;
    for(int j = l; j<=h-1; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            T temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            
        }
    }
    T temp = a[i+1];
    a[i+1] = a[h];
    a[h] = temp;
    return i+1;
}
template <typename T>
static void quicksort(T a[], int l, int h)
{
    if(l < h)
    {
        int partind = partition(a, l, h);
        quicksort(a, l, partind-1);
        quicksort(a, partind+1, h);
    }
}