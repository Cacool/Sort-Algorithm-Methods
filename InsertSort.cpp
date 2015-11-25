#include "iostream"
#include "cstdlib"
using namespace std;

void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

/*
 * 
void InsertSort(int number[], int n) //使用哨兵 
{
     int i, j;
     for(i = 2; i <= n; i++)
     {
           number[0] = number[i]; //设置哨兵，防止数组越界下溢出 
           for(j = i - 1; number[j] > number[0]; j--)
                 number[j+1] = number[j];
           number[j+1] = number[0];           
     } 
} 
*/

//方法二：不使用哨兵 
void InsertSort(int number[], int n) //使用哨兵 
{
     int i, j;
     for(i = 1; i < n; i++)
     {     
           int value = number[i];       
           for(j = i - 1; number[j] > value && j >= 0; j--)
                 number[j+1] = number[j]; //注意待插入元素的值number[i]可能会被number[j+1]覆盖，所以要用value预先保存待插入元素的值 
           number[j+1] = value;
/*           flagtest: if(3 == i)
                     for(int di = 0; di <= 3; di++)
                             cout<<number[di]<<' ';           
*/
     } 
} 

int main()
{
    int number[] = {1, 10, 8, 5, 7, 2};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;
    
    InsertSort(number, len);
    
    cout<<endl<<endl;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    system("pause");
    return 0;
}
