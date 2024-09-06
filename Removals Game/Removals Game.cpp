#include<iostream>
#include <vector>    
#include <algorithm>  
using namespace std;
int main ()
{
    int num_of_test_cases;
    vector<string> name;
    cin>>num_of_test_cases;
    for(int j=0;j<num_of_test_cases;j++)
    {
    int arr_size;
    cin>>arr_size;
    int arr1[arr_size];
    int arr2[arr_size];
    int size_of_arr1=arr_size-1;
    int size_of_arr2=arr_size-1;
    for(int i=0;i<arr_size;i++)
    {
    cin>>arr1[i];    
    }   
    for(int i=0;i<arr_size;i++)
    {
    cin>>arr2[i];    
    }   
    bool check=true;
    for(int k=0;k<arr_size;k++)
    {
    if(arr1[k]!=arr2[k])
    {
        check=false;
        name.push_back("Alice");
        break;
    }
    }
    if(check)
    {
    name.push_back("Bob");
    }
    }
    for(int i=0;i<name.size();i++)
    {
        cout<<name[i]<<endl;
    }    
return 0;
}


// Still not solved 