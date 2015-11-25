//程序有错 

#include "stdio.h"
#include "stdlib.h"

int partition(int a[], int low, int high)
{
	int pivotkey = a[low];
	//int low = 0, high = n - 1;
	while(low < high)
	{
		while(a[high] >= pivotkey)
			--high;
		
    		if(low < high)
			a[low++] = a[high];

		while(a[low] <= pivotkey)
			++low;
		if(low < high)
      			a[high--] = a[low];

	} //while
	a[low] = pivotkey; //here low == high
	return low;
}

void QickSort(int a[], int low, int high)
{
	int pivot;
	//int low = 0, high = n - 1;
	if(low < high)
	{
		pivot = partition(a, low, high);
		QickSort(a, low, pivot - 1);
		QickSort(a, pivot + 1, high);
	} //if
} //QickSort( )

int main()
{
	int a[] = {1, 8, 2, 10, 7, 3, 9};
	int len = sizeof(a) / sizeof(*a);
	int i = 0;
	for(i = 0; i < len; i++)
		printf("%d ", a[i]);
	QickSort(a, 0, len - 1);
	puts("\n");
	for(i = 0; i < len; i++)
		printf("%d ", a[i]);
	puts("\n");
	
	system("pause");
	system("pause");
	return 0;
}
