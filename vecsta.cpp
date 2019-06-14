#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,n,p1=-1,p2=-1;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            v.push_back(b);
        }
        for(int i=n-1;i>0;i--)
        {
            if(v[i]>v[i-1])
            {
                p1=i-1;
                break;
            }
        }
        if(p1!=-1)
        {
            for(int i=n-1;i>p1;i--)
            {
                if(v[p1]<v[i])
                {
                    p2=i;
                }
            }
            swap(v[p1],v[p2]);
            sort(v.begin()+(p1+1),v.end());
            for(int i=0;i<n;i++)
            {
                cout<<v[i];
            }
        }
        else
            cout<<"-1";
    }
}
