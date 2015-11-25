#include "iostream"
#include "stdlib.h"
using namespace std;

//BubbleSort
void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b; 
}

void BubbleSort(int number[], int n)
{
     int i, j;
     for(i = 0; i < n-1; i++)
        for(j = 0; j < n-i-1;  j++)
            if(number[j] > number[j+1])
                  swap(number[j], number[j+1]); 
} //BubbleSort

int main()
{
    int number[] = {1, 8, 2, 3, 7, 4, 5};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;      
    BubbleSort(number, len);
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    
    system("pause");
    return 0;
}
