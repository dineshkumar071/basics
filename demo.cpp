#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int> v(n),v1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[i+1])
        {
            v1.push_back(v[i]);
        }

    }
    int count1=v1[0];
    for(int i=0;i<v1.size();i++)
    {
        if(count1==v1[i])
        {
           count1++;

        }
        else
        {
            cout<<count1<<" ";
            count1++;
            i--;
        }

    }
}
