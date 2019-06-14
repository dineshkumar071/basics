#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,a1,b1;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<a<<"-"<<b<<endl;
    char s;
    while(1)
    {
        cout<<"do  want to continue (y/n):";
        cin>>s;
        switch(s)
            {
                case 'y':
                    {
                         int x=a,y=b;
                         cin>>a1>>b1;

                        if(y<a1)
                        {

                            cout<<x<<"-"<<y<<endl;
                            cout<<a1<<"-"<<b1<<endl;
                            x=a1;
                            y=b1;
                            break;
                        }
                        else if(x>a1)
                        {

                            x=a1;

                        }

                        else if(y<b1)
                        {
                            y=b1;

                        }
                        cout<<x<<"-"<<y<<endl;
                        //cout<<x<<"-"<<y<<endl;


                       break;
                    }
                case 'n':
                    {
                        exit(0);

                    }
            }
    }

}
