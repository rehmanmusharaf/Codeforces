#include<iostream>
using namespace std;
int main ()
{
int num_of_test_case;
cin>>num_of_test_case;
while (num_of_test_case--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]==s[n-1])
    {
        cout<<"no"<<endl;
    }
    else{
    cout<<"yes"<<endl;
    }
}
}
// solve 