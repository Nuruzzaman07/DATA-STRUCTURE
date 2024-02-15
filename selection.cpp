#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    //take input
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<7;i++)
    {
        int min=i;
        for(int j=i+1;j<7;j++)
        {
            if(arr[min]<arr[j])
            {
               min=j ;
            }
            if(min!=i)
            {
                swap(arr[i],arr[min]);
            }

        }
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
