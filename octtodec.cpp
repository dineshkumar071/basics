#include<bits/stdc++.h>
using namespace std;

vector<int> solve ()
{
    int n, i, value ;
    cin>> n;
    vector<int> temp;
    temp.clear();
    for(i=0; i < n; i++)
    {
        cin >> value;
        temp.push_back(value);
    }
    return temp;
}
// Calling part :
int main(void)
{
    vector<int> ans;
    ans.clear() ;
    ans = solve();
    for(int i=0; i< ans.size(); i++)
    cout << ans[i] << " " ;
}
