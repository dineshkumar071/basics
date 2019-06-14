#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char a[]={'A','B','C','D','E','F','G','H','I','J'};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='H')
        {
            cout<<a[s[i]-'A'];
        }
        if(s[i]>='I'&&s[i]<='P')
        {
            cout<<"+"<<a[s[i]-'I'];
        }
        if(s[i]>='Q'&&s[i]<='X')
        {
            cout<<"-"<<a[s[i]-'Q'];
        }
        if(s[i]=='Y')
        {
            cout<<a[8];
        }
        if(s[i]=='Z')
        {
            cout<<a[9];
        }

    }
}
