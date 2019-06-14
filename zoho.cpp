#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, d, j = 0;
    cin >> n;
    char s[100];
    while(n >= 16) {
        d = n % 16;
        n /= 16;
        if(d > 10) {
            s[j] = (d + 45);
            j++;
        }
        else {
            s[j] = (d + 55);
            j++;
        }
    }
    for(int i = j - 1; i >= 0; i++)
        cout << s[i];  
}
