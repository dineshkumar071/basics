#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int s,i,j;
    cin>>s;
    int a[s],key;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<s;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
            a[j+1]=key;
        }
    }
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
