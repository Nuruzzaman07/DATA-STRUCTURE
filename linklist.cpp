#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head =NULL;
void insertion(int element)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=head;
    head=newnode;
}

void display()
{
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void searchelement(int element)
{
    int j=0;
    struct node* search=head;
    while(search!=NULL)
    {
        if(search->data==element)
        {
            cout<<"Found"<<endl;
            j=1;
        }
        search=search->next;
    }
    if(j==0){cout<<"Not found"<<endl;}
}

int main()
{
    insertion(10);
    insertion(12);
    insertion(15);
    insertion(5);
    insertion(4);
    display();
    searchelement(4);
    searchelement(40);
}
