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
        int eoh=arr[i];
        int j;
        for( j=i-1;j>=0&&arr[j]>eoh;j--)
        {

                arr[j+1]=arr[j];

        }

        arr[j+1]=eoh;
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
