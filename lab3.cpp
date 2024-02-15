#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
struct student
{
    int id;
    int credit;
    float cgpa;
};

int main()
{
    int size=10;
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter id for student "<<i+1<<" : ";
        cin>>s[i].id;
        cout<<"Enter credit for student "<<i+1<<":";
        cin>>s[i].credit;
        cout<<"Enter cgpa for student "<<i+1<<":";
        cin>>s[i].cgpa;
    }
    int i=0;
    cout<<" the students ID whose CGPA is more than 3.75 is : ";
    while(i<size)
    {
        if(s[i].cgpa>3.75)
        {
            cout<<s[i].id<<" , ";

        }

        i++;
    }
    cout<<endl;
    cout<<" the students ID who has completed more than 50 credits :";
    for(int i=0;i<size;i++)
    {
        if(s[i].credit>50)
        {
        cout<<s[i].id<<" , ";
        }
    }
    cout<<endl;
}
