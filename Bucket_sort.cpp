#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Student
{
public:
   int marks;
   string name;
};
void bucket_sort(Student s[],int n)
{
 vector<Student>v[101];
 // O(n)
 for(int i=0;i<n;i++)
    {
    int m=s[i].marks;
    v[m].push_back(s[i]);
    }
// iterate over all vector
for(int i=100;i>=0;i--)
    {
    for(auto x:v[i])
      cout<<x.marks<<" "<<x.name<<endl;
    }
}
using namespace std;
int main()
{
Student s[1001];
int n;
cin>>n;
for(int i=0;i<n;i++)
    {
    cin>>s[i].marks>>s[i].name;
    }
  bucket_sort(s,n);
return 0;
}
