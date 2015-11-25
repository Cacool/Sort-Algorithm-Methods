#include "iostream"
#include "cstdlib"
using namespace std;

void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

void ShellSort(int number[], int n)
{
     int i, j;
     int increment = n;
     do
     {
         increment = increment / 3 + 1;
         for(i = increment; i < n; i++)
         {
               int value = number[i];
               for(j = i - increment; number[j] > value && j >= 0; j = j - increment)
                     number[j + increment] = number[j];
               number[j + increment] = value;
         } //for
         
     }while(increment > 1);
} //ShellSort

int main()
{
    int number[] = {1, 10, 8, 5, 7, 2};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;
    ShellSort(number, len);
    
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    system("pause");
    return 0;
}
