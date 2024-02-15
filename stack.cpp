#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class mystack
{
private:
    int size=100;
    int st[100];
    int top=0;
public:
    bool isempty()
    {
        if(top==0)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if(top==size)
        {
            cout<<"stack is full"<<endl;
            return true;
        }
        else
            return false;
    }
    bool push(int element)
    {
        if(isfull()==true)
        {
            cout<<"Stack is full"<<endl;
            return false;
        }
        else
        {
            st[top]=element;
            top++;
            cout<<"push Successfully"<<endl;
            return true;
        }

    }
    bool pop()
    {
        if(isempty()==true)
        {
            cout<<"Is empty"<<endl;
            return  false ;
        }
        else
        {
            top --;
            return true;
        }
    }
    gettopelement ()
    {
        if(isempty()==true)
        {
            cout<<"Is empty "<<endl;
        }
        else
        {
             return st[top-1];
        }
    }
    void printstack()
    {
        if(isempty()==true)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            for (int i=top-1;i>=0;i--)
            {
                cout<<st[i]<<endl;
            }
        }
    }
};
int main()
{
    mystack a;
    a.isempty();
    a.push(10);
    a.pop();
    a.push(100);
    a.push(200);
    cout<<a.gettopelement()<<endl;
    a.printstack();

}

