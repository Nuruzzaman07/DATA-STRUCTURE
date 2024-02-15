#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* Front=NULL;
struct node* Rear =NULL;
void enque(int data)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(Front==NULL&&Rear==NULL)
    {
        Front=newnode;
        Rear=newnode;
    }
    else
    {
        Rear->next=newnode;
        Rear=newnode;
    }
}
void dequeue()
{
    if(Front==NULL&&Rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(Front==Rear)
    {
        Front =Rear=NULL;
    }
    else
    {
        Front=Front->next;
    }
}

void display()
{
    struct node* ptr=Front;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    enque(10);
    enque(50);
    enque(30);
    dequeue();
    display();
}
