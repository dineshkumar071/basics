#include<bits/stdc++.h>
using namespace std;
int main(void)
{
   long int t;
    cin>>t;
    int a=0,b=1,c;
    for(int i=0;i<t;i++)
    {
        c=a+b;
        cout<<a<<endl;
        a=b;
        b=c;

    }
}
