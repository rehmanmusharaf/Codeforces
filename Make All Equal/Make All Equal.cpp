#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int num_of_test_cases;
cin>>num_of_test_cases;
for(int i=0;i<num_of_test_cases;i++)
{
int arr_size;
cin>>arr_size;
unordered_map<int, int> mp;
int maxRepeat=0;
// int arr[arr_size];
for(int i=0;i<arr_size;i++)
{
    int input;
    cin>>input;
    mp[input]++;

}
    for (const auto& pair : mp) {
        if (pair.second > maxRepeat) 
        {
            maxRepeat=pair.second;
        }
    }
    cout<<arr_size-maxRepeat<<endl;
}
}
// Soolved and accepted