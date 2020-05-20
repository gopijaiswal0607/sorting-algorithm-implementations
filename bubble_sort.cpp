#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n)
{
    // Base case if array contain single element then it is sortd
if(n==1)
     return ;
 //replacing maximum element at last
for(int i=0;i<n-1;i++)
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
//call bubble sort for remaining element
bubble_sort(arr,n-1);

}
void bubble_sort2(int *arr,int j,int n)
{
if(n==1)
  return ;
if(j==n-1){
  return bubble_sort2(arr,0,n-1);}
 if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
bubble_sort2(arr,j+1,n);
return;
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
      cin>>arr[i];
bubble_sort2(arr,0,n);
for(int i=0;i<n;i++)
      cout<<arr[i]<<" " ;
return 0;
}
