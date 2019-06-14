#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char vowel[] = {'a','e','i','o','u'};
    while(t--)
    {
        string str,s="";
        cin >> str;
        for(int i = 0; str[i];i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                s += str[i];
            }
        }
        int right = s.length()-1;
        for(int i = 0;str[i];i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                str[i] = s[right--];
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
