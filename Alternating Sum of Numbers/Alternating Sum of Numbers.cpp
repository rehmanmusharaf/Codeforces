#include<iostream>
using namespace std;
int main()
{
    int num_of_test_cases;
    cin>>num_of_test_cases;
    for(int i=0;i<num_of_test_cases;i++)
    {
    int arr_size;
    cin>>arr_size;
    int arr[arr_size];
    for(int j=0;j<arr_size;j++)
    {
        cin>>arr[j];
    }
    bool check=true;
    int ans=0;
    for(int j=0;j<arr_size;j++)
    {
    if(check)
    {
        ans+=arr[j];
        check=false;
    }
    else
    {
        ans-=arr[j];
        check=true;
    }
    }
    cout<<ans<<endl;
    }
}

