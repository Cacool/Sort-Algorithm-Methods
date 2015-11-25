//堆排序，该程序有一点问题 
#include "iostream"
#include "cstdlib"
using namespace std;

void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

void HeapAdjust(int number[], int s, int n)
{
     int value, i;
     value = number[s];
     for(i = 2 * s; i < n; i *= 2)
     {
           if(number[i] < number[i+1] && (i+1) < n)
                        i++;
           if(number[s] >= number[i])
                        break;
           number[s] = number[i];
           s = i;
     } //for
     number[s] = value;
} //HeapAdjust

void HeapSort(int number[], int n)
{
     int i;
     for(i = (n-1) / 2 ; i >= 0; i--)
           HeapAdjust(number, i, n);
     for(i = n-1; i >= 0; i--)
     {
           swap(number[0], number[i]);
           HeapAdjust(number, 0, i - 1);      
     } //for
} //HeapSort

int main()
{
    int number[] = {1, 10, 8, 5, 7, 2};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;
    HeapSort(number, len);
    
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    system("pause");
    return 0;
}
