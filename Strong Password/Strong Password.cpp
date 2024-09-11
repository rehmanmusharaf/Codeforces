#include<iostream>
#include <set>
using namespace std;
char randomchar(set<char> uniqueChars)
{
    char alphabet[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };
    for(int i=0;i<26;i++)
    {
    std::set<char>::iterator it = uniqueChars.find(alphabet[i]);
    if (it == uniqueChars.end()) 
    {
        return alphabet[i];
    } 
    }
    return 'a';
}
int main ()
{
    int num_of_test_cases;
    cin>>num_of_test_cases;
    set<char> a;
    for(int i=0;i<num_of_test_cases;i++)
    {   string pass;
    cin>>pass;
    std::set<char> uniqueChars(pass.begin(), pass.end());
    char randomch=randomchar(uniqueChars);
    bool check=false;
    for(int j=pass.length();j>=0;j--)
    {
    if(pass[j]!=randomch&&(j>0&&pass[1-j]!=randomch))
    {
        pass+="*";
        for(int k=pass.length()-1;k>j;k--)
        {
            pass[k]=pass[k-1];
        }
        pass[j]=randomch;
        check=true;
        break;
    }
    }
    if(!check)
    {
    pass[pass.length()]=randomch;
    }
    cout<<pass<<endl;
    }
}