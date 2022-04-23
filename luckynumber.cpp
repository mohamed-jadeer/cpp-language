#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch='y';
    while(ch=='Y' || ch=='y')
    {
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        if(num%10 == 4 || num%10 == 7)
        {
            num/=10;
            continue;
        }
        else
        {
            cout<<"Not a Lucky number!!";
            return 0;
        }
    }
    cout<<"You have Entered a Lucky number !!";
    cout<<endl<<"Do you wish to continue: ";
    cin>>ch;
    }
    return 0;
}
