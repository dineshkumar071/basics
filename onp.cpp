#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        string a;
        cin>>a;
        vector<char> v;
        stack<char> st;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='('||a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
                {
                    st.push(a[i]);
                }
            else if(a[i]>='a'&&a[i]<='z')
            {
                v.push_back(a[i]);
            }
            else
            {
                while(st.top()!='(')
                {
                    v.push_back(st.top());
                    st.pop();
                }st.pop();
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<"";
        }
        cout<<endl;
    }
}
