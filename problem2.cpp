#include<iostream>
using namespace std;
int main()
{
    int s;
   cout<<"Enter number of element :";
   cin>>s;
    int arr[s];
    cout<<"Enter  element :"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<s;k++)
                {
                    arr[k]=arr[k+1];
                    s=s-1;
                }
                //j--;
            }
        }
    }
    cout<<"Duplicate element are removed :";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }

}
