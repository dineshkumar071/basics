#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> v,u,w;
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(int i=0;i<a;i++)
        {
            cin>>b;
            v.push_back(b);
        }
        for(int i=a-1;i>0;i--)
        {
            if(v[i]>v[i-1])
            {
                u.push_back(v[i]);
            }else{
               w.push_back(v[i]);
            }
        }
        for(int i=0;i<w.size();i++)cout<<w[i]<<" ";
        for(int i=0;i<u.size();i++)cout<<u[i]<<" ";
    }
}
