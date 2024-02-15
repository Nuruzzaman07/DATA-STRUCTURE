#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<7;i++)
    {
        int EOH=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>EOH)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=EOH;
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
