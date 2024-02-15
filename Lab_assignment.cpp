#include<iostream>
using namespace std;
struct store
{
    string product_id;
    string product_name;
    int unit_price;
    int available_quantity;
    struct store *next;
    store(string p_id,string p_name,int u_price,int availquant)
    {
        product_id=p_id;
        product_name=p_name;
        unit_price=u_price;
        available_quantity=availquant;
        next=NULL;
    }
};
void showAll(struct store *head)
{
    struct store *ptr=NULL;
    ptr=head;
    if(ptr==NULL)
    {
        cout<<"Nothing in the list"<<"\n";
    }
    while(ptr!=NULL)
    {
        cout<<"Product id is:\t"<<ptr->product_id<<endl;
        cout<<"Product name is:\t"<<ptr->product_name<<endl;
        cout<<"Product price is:\t"<<ptr->unit_price<<endl;
        cout<<"Available quantity is:\t"<<ptr->available_quantity<<endl;
        ptr=ptr->next;
    }
}
void addProduct(struct store *head)
{
    string p_id;
    string p_name;
    int u_price;
    int availquant;
    cout<<"Input product id"<<"\n";
    cin>>p_id;
    cout<<"Input product name"<<"\n";
    cin>>p_name;
    cout<<"Input unit price"<<"\n";
    cin>>u_price;
    cout<<"Input available quantity"<<"\n";
    cin>>availquant;

    struct store *temp=new store(p_id,p_name,u_price,availquant);
    temp->product_id=p_id;
    temp->product_name=p_name;
    temp->unit_price=u_price;
    temp->available_quantity=availquant;
    temp->next=NULL;
    struct store *ptr=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

}
void removeProduct(struct store **head)
{
    string p_id;
    cout<<"Input product id to delete the product"<<"\n";
    cin>>p_id;
    struct store *current=*head;
    struct store *previous=NULL;
    if(*head==NULL)
    {
        cout<<"List is already empty!"<<endl;
    }
        while(current!=NULL)
        {
            if(current->product_id==p_id)
            {
                if(previous==NULL)
                {
                    *head=current->next;
                }
                else
                {
                    previous->next=current->next;
                }
                delete current;
                cout<<"Product removed successfully"<<"\n";
                return;
            }
            previous=current;
            current=current->next;
       }
       cout<<"Product with id "<<p_id<<" not found"<<"\n";
}
void searchProduct(struct store *head)
{
    cout<<"Give input of the product name you want to see"<<"\n";
    string p_name;
    cin>>p_name;
    struct store *ptr=NULL;
    ptr=head;
    int b=0;
    while(ptr!=NULL)
    {
        if(ptr->product_name==p_name)
        {
            cout<<"**Product has been found!**"<<"\n";
            b=1;
        }
        ptr=ptr->next;
    }
    if(b==0)
     {cout<<"**Product with name "<<p_name<<" has not been found!**"<<"\n";}
}

int main()
{
    struct store *head=new store("p-001","Mouse",600,50);
    struct store *ptr1=new store("p-002","Keyboard",800,50);
    head->next=ptr1;
    struct store *ptr2=new store("p-003","SSD",4500,37);
    ptr1->next=ptr2;
    struct store *ptr3=new store("p-004","Monitor",12900,78);
    ptr2->next=ptr3;
    struct store *ptr4=new store("p-005","GPU",73800,23);
    ptr3->next=ptr4;
    int c;
    while(1)
    {
        cout<<"Input any number for different operations:\n1.Show all the products on the list.\n2.Add a new product to the list.\n3.Remove a product on the list based on product id.\n4.Search for a product based on product name.\n5.Sort and show products according to unit price(ascending).\n6.Sort and show products according to unit price(descending)\n0.Exit the system."<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            showAll(head);
            cout<<"\n";
            break;
        case 2:
            addProduct(head);
            cout<<"\n";
            break;
        case 3:
            removeProduct(&head);
            cout<<"\n";
            break;
        case 4:
            searchProduct(head);
            cout<<"\n";
        case 0:
            return 0;
        default:
            cout<<"\nWrong Input\n";
        }
    }
    return 0;
}
