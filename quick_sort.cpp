#include<iostream>
using namespace std;
int partition(int *ar,int s,int e)
{
int i=s-1;
int j=s;
int pivot=ar[e];
for(int j=s;j<e;j++)
    {
    if(ar[j]<=pivot)
       {
           i++;
           swap(ar[i],ar[j]);
       }
    }
  swap(ar[i+1],ar[e]);
  return i+1;
}
void quick_sort(int *ar,int s,int e)
{
if(s>=e)
    return ;
int p=partition(ar,s,e);
quick_sort(ar,s,p-1);
quick_sort(ar,p+1,e);
}
int main()
{
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
      cin>>ar[i];
quick_sort(ar,0,n-1);
for(int i=0;i<n;i++)
      cout<<ar[i]<<" ";
return 0;
}
