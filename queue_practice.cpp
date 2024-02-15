#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Queue
{
private:
    int Q[6];
    int front=-1;
    int rear=-1;
public:
    bool isEmpty()
    {

        if(front== -1&&rear== -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool isFull()
    {
        if(rear==5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

   bool enqueue(int element)
{
        if(isFull()==true)
        {
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            Q[rear]=element;
            return true;
        }
        else
        {
            rear++;
            Q[rear]=element;
            return true;
        }

}

    bool isDequeue()
    {
        if(isEmpty()==true)
        {
            return true;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
            return true;
        }
        else
        {
            front++;
            return true;
        }
    }
    bool getfront()
    {
        if(isEmpty()==true)
        {
            cout<<"IS EMPTY"<<endl;
        }
        else
        {
            cout<<Q[front]<<endl;
        }
    }
    bool print()
    {
        if(isEmpty()==true)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        for(int i=front;i<=rear;i++)
        {
            cout<<Q[i]<<endl;
        }
    }
};



int main()
{
    Queue a;
    a.isEmpty();
    a.isFull();
    a.enqueue(50);
    a.enqueue(10);
    a.enqueue(5);
    a.enqueue(505);
    a.enqueue(100);
    a.enqueue(500);
    a.enqueue(55);
    a.print();
}
