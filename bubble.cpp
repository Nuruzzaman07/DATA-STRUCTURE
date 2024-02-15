#include<iostream>
using namespace std;
int main()
{
     int i,counter,n,eoh,f,l,m,e;
     frist:
     cout<<"Enter element number :";
     cin>>n;
     int arr[n];
      for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     counter =1;
     while(counter <7)
     {
         for( i=0;i<n-counter;i++)
         {
             if(arr[i]>arr[i+1])
             {
                 eoh=arr[i+1];
                 arr[i+1]=arr[i];
                 arr[i]=eoh;
             }

         }
         counter++;
     }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    f=0;
    l=n-1;
     cout<<"Enter Element for search : ";
     cin>>e;
     while(f<=l)
     {

         m=(f+l)/2;
         if(e==arr[m])
         {
                cout<<"Found \n Index at :" <<m<<endl;
                 k=1;
                 //goto frist;
                break;

         }
         else if (e>arr[m])
         {
             f=m+1;


         }
         else if(e<arr[m])
         {
             l=m-1;


         }
     }
     if (k!=1)
     {
         cout<<"Not found "<<endl;
     }
     goto frist;

}
