// Count the no of inversion . mean in a arr count the number of possible
#include<iostream>
using namespace std;
int merge(int *arr,int s,int e)
{
int mid=(s+e)/2;
int i=s;
int j=mid+1;
int k=s;
int temp[100000];
int cnt=0;
while(i<=mid && j<=e)
    {
    if(arr[i]<arr[j])
        {
        temp[k++]=arr[i++];
        }
    else
        {
        temp[k++]=arr[j++];
       cnt+=mid-i+1;
        }

        }
    if(i<=mid)
        while(i<=mid)
         temp[k++]=arr[i++];
     if(j<=e)
        {
        while(j<=e)
        temp[k++]=arr[j++];
        }
    for(int i=s;i<=e;i++)
         arr[i]=temp[i];

    return cnt;
}
int inversionCount(int *arr,int s,int e)
{
if(s>=e)
{
    return 0;
}
// Merge sort
int mid=(s+e)/2;
int x=inversionCount(arr,s,mid);
int y=inversionCount(arr,mid+1,e);
int z=merge(arr,s,e);// Cross inversion
return x+y+z;
}

int main()
{

int arr[]={1,5,2,6,3,0};
cout<<inversionCount(arr,0,5)<<endl;
}
