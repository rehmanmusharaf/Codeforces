#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int isperfectsquare(int num)
{
if(num<0)return 0;
int root=sqrt(num);
return root*root==num?root:0;
}
bool isvalid(int i,int j,int root,string s,int count)
{
if(i==0||i==root-1&&s[count]=='1')
{
    return true;
}
if(j==0||j==root-1&&s[count]=='1')
return true;
return s[count]=='0'?true:false;
}

int main ()
{
    int num_of_test_case;
    cin>>num_of_test_case;
    for(int i=0;i<num_of_test_case;i++)
    {
    int arr_size;
    cin>>arr_size;
    string s;
    cin>>s;
    int root=isperfectsquare(s.length());
    if(root!=0&&root!=2)
    {
    // vector<vector<char>> arr;
    char arr[root][root];
    int count=0;
    bool valid=true;
    for(int i=0;i<root;i++)
    {
    for(int j=0;j<root;j++)
    {
     bool check=isvalid(i,j,root,s,count);
     if(check)
     {
     arr[i][j]=s[count];
     count++;
     }
     else
     {
        cout<<"No"<<endl;
        valid=false;
        break;
     }
    }
    if(!valid)
    {
    break;
    }

    }
    if(valid)
    cout<<"Yes"<<endl;
    }
    else if(root==2)
    {
        cout<<(s=="1111"?"Yes":"No")<<endl;
    }
    else
    cout<<"No"<<endl;
    }
    return 0;
}
// solved and accepted 