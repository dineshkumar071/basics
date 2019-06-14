#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int> v,v1;
    while(n>0)
    {
        int d=n%2;
        n=n/2;
        v.push_back(d);
    }

    int j=v.size();
    while(j<16)
    {
        v1.push_back(0);
        j++;
    }
    for(int i=v.size()-1;i>=0;i--)v1.push_back(v[i]);
    cout<<"binary form is:";
    for(int i=0;i<v1.size();i++)cout<<v1[i];
    cout<<endl;
    for(int i=0;i<v1.size()-1;i++)
    {
        int count1=0;
        if(v[i]==1)
        {
            while(v[i]==1){
                count1++;
                i++;
            }
        }
        cout<<i-count1<<" "<<count1;
        else
            count1 = 0;
    }

}
