#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    cout<<"Enter element of arr1 :"<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>arr1[r][c];
        }
    }
   for(int r=0;r<3;r++)
   {
       for(int c=0;c<3;c++)
       {
          arr2[r][c]=arr1[c][r];
       }
   }

    for(int r=0;r<3;r++)
   {
       for(int c=0;c<3;c++)
       {
          cout<<arr2[r][c]<<" ";
       }
       cout<<endl;
   }
}
