#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int count1=0;
        string a;
        cin>>a;
        stack<char> s;
        vector<char> v;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='<')
            {
                s.push(a[i]);
            }
            else
            {
                if(s.empty())
                {
                    break;
                }
                else
                {
                    s.pop();
                }
                if(s.empty())
                {
                    count1=1+i;
                }
            }
        }
        cout<<count1<<endl;
    }
}
