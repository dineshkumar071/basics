#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j < i;j++)
        {
            cout<<" ";
        }
        for(int k = n - 1; k >= i; k--) {
            cout << "* ";
        }
        cout<<endl;
    }
}
