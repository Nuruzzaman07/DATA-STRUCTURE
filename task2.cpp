#include<iostream>
using namespace std;
int main()
{
    char password[8];
    for(int i=0;i<8;i++)
    {
        cin>>password[i];
    }
    for(int i=0;i<8;i++)
    {


        if(password[i]>= 'A'&& password[i]<='Z')
        {

            password[i-25]=password[i];
        }
        else if(password[i]>='a'&& password[i]<='z')
        {
            password[i]+=26;
        }
    }

    for(int i=0;i<8;i++)
    {
        cout<<password[i];
    }
    cout<<endl;



}
