#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//shuffling of array element takes O(n) times
void shuffle(int *ar,int s,int e)
{
  srand(time(NULL));
  for(int i=e;i>0;i--)
    {
        int temp=rand()%(i+1);//randomly generate an index and swap
         swap(ar[i],ar[temp]);
    }
}
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
// Always takes O(nlogn) time
void Randomized_quick_sort(int *ar,int s,int e)
{
if(s>=e)
    return ;
int p=partition(ar,s,e);
Randomized_quick_sort(ar,s,p-1);
Randomized_quick_sort(ar,p+1,e);
}
int main()
{
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
      cin>>ar[i];
shuffle(ar,0,n-1);
for(int i=0;i<n;i++)
      cout<<ar[i]<<" ";
cout<<endl;
Randomized_quick_sort(ar,0,n-1);
for(int i=0;i<n;i++)
      cout<<ar[i]<<" ";
return 0;
}



