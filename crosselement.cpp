#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string s;
    int left = 0,right = str.length()-1;
    for(int i = 0;str[i]; i++)
    {
        for(int j = 0;str[j];j++)
        {
            if(j == left)
            {
                cout<<str[left];
            }
            else if(j == right)
            {
                cout<<str[right];
            }
            else
                cout<<" ";
        }
        left++;
        right--;
        //cout<<endl;
    }
    return 0;
}
