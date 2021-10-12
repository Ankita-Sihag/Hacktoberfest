#include<bits/stdc++.h>
using namespace std;
int pal_check(string s,int n)
{
    
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return 0;
        }
        else
        {
            continue;
        }
       
    }
    return 1; 
}
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n=s.length();
    // cout<<n;
    int c=pal_check(s,n);
    if(c==0)
    cout<<"\nNot Palindrome";
    else
    cout<<"\nPalindrome";
    return 0;
}