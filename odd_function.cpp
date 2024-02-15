#include<iostream>
#include<stdio.h>
using namespace std;
void oddfunction(int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int s=12;
    int e=23;

    oddfunction(s,e);
}
