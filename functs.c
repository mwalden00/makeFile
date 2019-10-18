#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double averageVal(int *arr, int size)
{
	double sum = 0;
	int i = size;
	while (i > 0) {
		sum += *arr;
		arr++;
		i--;
	}
	sum = sum / size;
	return sum;
}

void arr_copy(int *a0, int *a1, int size)
{
	while (size > 0)
	{
		*a1 = *a0;
		a1++;
		a0++;
		size--;
	}
}

int mystrlen(char *s) {
	int len = 0;
	while (*s) {
		len++;
		s++;
	}
	return len;
}


