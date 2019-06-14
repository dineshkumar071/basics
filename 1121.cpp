#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,b,s;
    vector<int> v,v1;
    cin>>s;
    v.push_back(s);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
        for(int j=0;j<v.size();j++)
        {
            int Count=0;
            b = v[j];
            while(v[j]==b)
            {
                Count++;
                j++;
            }
            j--;
            v1.emplace_back(Count);
            v1.emplace_back(b);
        }
        v = v1;
        v1.clear();
    }
}
