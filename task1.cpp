#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<10;i++)
    {
        int j=i-1;
        int eoh=arr[i];
        while(j>=0&&arr[j]>eoh)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=eoh;

    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    int n,k;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
        if(sum<=n)
        {
            cout<<arr[i]<<" ";
            k=k+1;
        }

    }

}
