#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool isprime(int n)
{
  if(n<1)return false;
  for(int i=2;i<n;i++)
  {
      if(n%i==0)return false;
  }
  return true;
}
int main(void)
{
    int t,n;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n;

        for(int i=2;i<n;i++)
        {
            if(isprime(i))v.push_back(i);
        }
        int flag =1;
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                int d=v[i]+v[j];
                if(d==n)
                {
                    cout<<v[i]<<" "<<v[j];
                    flag=0;
                    break;
                }
            }
            if(flag == 0) break;
            }
            v.empty();
            cout<<endl;
        }

    }

