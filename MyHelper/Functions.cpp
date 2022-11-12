#include <iostream>
using namespace std;


template<typename D>
void sort_arr(D* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                D temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}