#include "iostream"
#include "cstdlib"
using namespace std;

void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

void SelectionSort(int number[], int n)
{
     int i, j, min;
     for(i = 0; i < n; i++)
     {
           min = i;
           for(j = i+1; j < n; j++)
                 if(number[j] < number[min])
                              min = j;
           if(min != i)
                  swap(number[i], number[min]);
     } //for
} //SelectionSort

int main()
{
    int number[] = {1, 10, 8, 5, 7, 2};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;
    SelectionSort(number, len);
    
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    system("pause");
    return 0;
}
