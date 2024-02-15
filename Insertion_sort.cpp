
#include<iostream>
#include<stdio.h>
using namespace std;

void insertion(int arr[],int Size)
{
    //take input
    cout<<"Enter the element of array -"<<endl;
    for(int i=0;i<Size;i++)
    {
        cin>>arr[i];
    }
    //insertion Sort
    /*Value of Staring index (starting_index) will be 1.
        We will consider the element in starting_index as the element_on_hand.
        Value of Current index (current_index) will be starting_index – 1.
        If, current_index >= 0 and the element in current_index is greater than element_on_hand, do (a) (b) (5), else go to (6).
        The element of current_index+1 index will be the element in current_index.
        Decrease the value of current_index by 1.
        Repeat (4).
        The element in current_index+1 index will be the element_on_hand.
        Increase the value of starting_index and repeat (2) (3) (4) (5) (6) till starting_index<soa*/
    for(int starting_index =1;starting_index<Size;starting_index++)
    {
        int eoh=arr[starting_index];//STORE VALUE IN TEMPORARY VARIABLE
        int current_index=starting_index-1;
        while(arr[current_index]>eoh&&current_index>=0)
        {

                arr[current_index+1]=arr[current_index];
                current_index--;

        }

        arr[current_index+1]=eoh;
    }
    //print output
    cout<<"Sorted list -> ";
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int Size;
    cout<<"Enter the size of array :";
    cin>>Size;
    int arr[Size];//DECLARE AN ARRAY
    insertion(arr,Size);
}
