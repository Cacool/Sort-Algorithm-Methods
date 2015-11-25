#include "iostream"
#include "cstdlib"
using namespace std;
#define MAXSIZE 1000

void swap(int &a, int &b)
{
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

void Merge(int number[], int result[], int low, int mid, int high)
{
     int i, j, k = low;
     for(i = low, j = mid+1; i <= mid && j <= high; k++)
     {
           if(number[i] < number[j])
                        result[k] = number[i++];
           else
                        result[k] = number[j++];
     }
     if(i < mid)
          for(int l = 0; l <= mid - i; l++)
                  result[k++] = number[i++]; 
     if(j < high)
          for(int l = 0; l <= high - j; l++)
                  result[k++] = number[j++];
} //Merge

void MergeSort(int number[], int result[], int low, int high)
{
     int mid;
     int result2[MAXSIZE+1];
     if(low == high)
            result[low] = number[low];
     else
     {
         mid = (low + high) / 2;
         MergeSort(number, result2, low, mid);
         MergeSort(number, result2, mid+1, high);
         Merge(result2, result, low, mid ,high);
     } //else
}     

int main()
{
    int number[] = {1, 10, 8, 5, 7, 2};
    int len = sizeof(number) / sizeof(*number);
    int i;
    for(i = 0; i < len; i++)
          cout<<number[i]<<" ";
    cout<<endl;
    int result[len];
    memset(result, 0, sizeof(int)*len);
    MergeSort(number, result, 0, len-1);
    
    cout<<endl<<endl;
    for(i = 0; i < len; i++)
          cout<<result[i]<<" ";
    system("pause");
    return 0;
}
