#include<iostream>
using namespace std;
void count_sort(int *arr,int n)
{
//find largest element
int largest=-1;
for(int i=0;i<n;i++)
     largest=max(largest,arr[i]);
int *arr1=new int[largest+1]{0};
for(int i=0;i<n;i++)
      arr1[arr[i]]++;
int j=0;
for(int i=0;i<=largest;i++)
    {
    while(arr1[i]>0)
        {
        arr[j]=i;
        arr1[i]--;
        j++;
        }
    }
}
int main()
{
int arr[10]={2,13,6,4,99,67,55,55,87,23};
int n=10;
count_sort(arr,n);
for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
return 0;
}
