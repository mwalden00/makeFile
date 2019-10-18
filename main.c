#include <stdio.h>
#include <stdlib.h>
#include "functs.h"

int main()
{
    int arr1[100] = {1,2,3,4};
    int arr2[100] = {5,6,7,8};
    printf("arr1: [%i, %i, %i, %i]\n", arr1[0], arr1[1], arr1[2], arr1[3]);
    printf("arr2: [%i, %i, %i, %i]\n", arr2[0], arr2[1], arr2[2], arr2[3]);
    double av = averageVal(arr1, 4);
    printf("Testing averageVal on arr1: %f\n", av);
    arr_copy(arr1, arr2, 4);
    printf("Testing arr_copy from arr1 to arr2\nNew arr2:[%i, %i, %i, %i]\n", arr2[0], arr2[1], arr2[2], arr2[3]);
    char str[100] = "I like pizza!";
    printf("Testing mystrlen on string \"I like pizza!\": %i\n", mystrlen(str));
    return 0;
}