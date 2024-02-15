#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    cout<<"Enter array element :"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    int k=0;
    int Even[50];
    int odd[50];
    for(int i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            Even[j]=arr[i];
            j=j+1;
        }

    }
    for (int i=0;i<6;i++)
    {
        if(arr[i]%2!=0)
        {
            odd[k]=arr[i];
            k=k+1;
        }
    }
    cout<<"Even number :";
    for(int i=0;i<j;i++)
    {
        cout<<Even[i]<<" ";
    }
    cout<<" \nOdd number :";
    for(int i=0;i<k;i++)
    {
        cout<<odd[i]<<" ";
    }


}
