#include<bits/stdc++.h>
using namespace std;
#define Max 100
class Stack
{
    public:

        int arr[Max];
        int top;
//        public:
        Stack(){
            top=-1;
        }
        bool isEmpty();
        bool isFull();
        int pop();
        void push(int x);
        void display();

};
void Stack::display()
{
    int d
}
bool Stack::isEmpty()
{
    if(top=-1)
        return true;
    return false;
}
bool Stack::isFull()
{
    if(top==Max-1)
        return true;
    return false;
}
int Stack::pop()
{
    if(isEmpty())
    {
        cout<<"stack underflow";
        abort();
    }
    int x=arr[top];
    top--;
    return x;
}
void Stack::push(int x)
{
    if(isFull())
    {
        cout<<"stack is full";
        abort();
    }
    top++;
    arr[top]=x;
}
int main(void)
{
    Stack s;
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        s.push(a);
    }

}

