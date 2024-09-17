#include<iostream>
#include <cstdlib> // for abs()
using namespace std;
int main()
{
int num_of_test_case;
cin>>num_of_test_case;
while(num_of_test_case--)
{
    int a,b;
    cin>>a>>b;
    int minimum=abs(a-a)+abs(b-a);
    for(int i=a+1;i<=b;i++)
    {
        if(minimum>(abs(i-a)+abs(b-i)))
        {
            minimum=abs(i-a)+abs(b-i);
        }
    }
    cout<<minimum<<endl;

}
}
// "problem solved"