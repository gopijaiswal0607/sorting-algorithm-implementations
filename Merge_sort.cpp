#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
int l,r,k;
int mid=(s+e)/2;
l=s;
r=mid+1;
k=s;
int temp[100];
while(l<=mid && r<=e)
    {
    if(arr[l]<arr[r])
      temp[k++]=arr[l++];
    else
      temp[k++]=arr[r++];
    }
    while(l<=mid)
        {
        temp[k++]=arr[l++];
        }
    while(r<=e)
        temp[k++]=arr[r++];
    for(int i=s;i<=e;i++)
              arr[i]=temp[i];
}
void merge_sort(int *arr,int s,int e)
{
if(s>=e)
      return ;
int mid=(s+e)/2;
merge_sort(arr,s,mid);
merge_sort(arr,mid+1,e);
merge(arr,s,e);
}
int main()
{
int arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
      cin>>arr[i];
int s=0,e=n-1;
merge_sort(arr,s,e);
for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";

return 0;
}
