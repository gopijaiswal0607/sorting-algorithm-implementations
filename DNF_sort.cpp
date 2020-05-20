// sorting of the array of 0s,1s,2s
#include<iostream>
using namespace std;
void DNF_sort(int *arr,int n)
{
int s=0;
int e=n-1;
int mid=0;
while(mid<=e)
    {
    if(arr[mid]==0)
        {
        swap(arr[s],arr[mid]);
        s++,mid++;
        }
    if(arr[mid]==1)
          mid++;
    if(arr[mid]==2)
        {
        swap(arr[mid],arr[e]);
        e--;
        }

    }


}
int main()
{
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
     cin>>arr[i];
DNF_sort(arr,n);
for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
return 0;
}
