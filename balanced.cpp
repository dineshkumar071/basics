#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    int Count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            Count++;
        } else {
            Count--;
            if (Count < 0)
                break;
        }
    }
    if (Count < 0) {
        cout << "Impossible\n";
    } else {
        cout << str;
        for (int i = 0; i < Count; i++)
            cout << ')';
        cout << endl;
    }
}

/*int main(void)
{
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')x++;
        else if(s[i]==')')
        {
            y++;
            if(s[i]==')'&&s[i+1]==')')
            {
                cout<<"impossible";
                break;
            }
        }
    }if(x>y)
    {
        cout<<s;
        for(int i=0;i<x-y;i++)cout<<")";
    }
   // else if(x=y)cout<<s;
    else
        {
            cout<<"impossible";
        }
}*/
