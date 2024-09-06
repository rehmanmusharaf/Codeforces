#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
 int num_of_test_cases;
 cin>>num_of_test_cases;
 for(int i=0;i<num_of_test_cases;i++)
 {
    int l,r;
    int L,R;
    cin>>l>>r;
    cin>>L>>R;       
    int count=0;
    int minimum =min({l, r, L, R});
    int maximum = max({l, r, L, R});
    int count1=0;
    if(l==L&&r==R)
    {
      for(int i=minimum;i<maximum;i++)
      {
         count++;
      }
    }
    if(minimum==l)
    {
    for(int i=0;i<=maximum;i++)
    {
    if(minimum>=L&&minimum<r&&minimum<=R)
    {
        count++;
    }
       minimum++;
    }
    count++;
    }
    else if(minimum==L)
    {
    for(int i=0;i<=maximum;i++)
    {
    if(minimum>=l&&minimum<R&&minimum<=r)
    {
    count++;
    }
       minimum++;
    }
    count++;
    }
    cout<<"count is"<<count<<endl;  
 }

}