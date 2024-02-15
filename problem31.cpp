#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<7;i++)
    {
        int min=arr[i];
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]>arr[j])
            {
               min=arr[j] ;
            }
            if(min!=arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
