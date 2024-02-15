#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
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
    struct node* dis=head;
    while(dis!=NULL)
    {
        cout<<dis->data<<endl;
        dis=dis->next;
    }
}
void searchelement(int element)
{
    int j=0;
    struct node* value=head;
    while(value!=NULL)
    {
        if(value->data==element)
        {
            cout<<"Found"<<endl;
            j=1;
        }
        value=value->next;
    }
    if(j==0)
    {
        cout<<"Not Found"<<endl;
    }
}
void deleteend()
{
    struct node* endnode=head;
    while(endnode!=NULL)
    {
        if(endnode->next==NULL)
        {
            endnode->data=NULL;
        }
        endnode=endnode->next;
    }
}
void deletefrist()
{
    head=head->next;
}
void insertiondata(int data, int n)
{
     struct Node* temp1 = head;
     temp1->data = data;
     temp1->next = NULL;


    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }


    Node* temp2 = head;


    for(int i=0; i<n-2; i++){
        temp2=temp2->next;
    }


    temp1->next=temp2->next;
    temp2->next=temp1;

}
int main()
{
    insertion(10);
    insertion(15);
    insertion(40);
    display();
    searchelement(15);
    searchelement(50);
    deleteend();
    display();
    insertiondata(50,2)

}
