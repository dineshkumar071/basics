#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int d = 0;
    for(int i = 0; i < n; i++) {
        vector<int> v1,v2;
        for(int j = 0; j < n; j++) {
            if(j != i) {
                v1.push_back(v[j]);
                v2.push_back(v[j]);
            }
        }
        sort(v1.begin(), v1.end());
        if(v1 == v2) {
            d++;
        }
    }
    cout << d;
}
