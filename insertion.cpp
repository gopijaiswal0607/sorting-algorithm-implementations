#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
 int i,j,temp;
 for(i=1;i<n;i++){
    temp=a[i];
    for(j=i-1;j>=0&&temp<a[j];j--)
    a[j+1]=a[j];
     a[j+1]=temp;
    }
}
int main(){
int n,i;
cout<<"Enter the number of element\n";
cin>>n;
int a[n];
for(i=0;i<n;i++)
cim>>a[i];
insertion_sort(a,n);
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
