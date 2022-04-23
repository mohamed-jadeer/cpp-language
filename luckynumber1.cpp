#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch='y';
    while(ch =='Y' || ch=='y')
    {
        int cnt=0;
        cout<<"Enter a number :";
        cin>>num;
        while(num > 0)
        {
                if(num%10 == 4 || num%10 == 7)
                {
                    num/=10;
                    cnt++;
                }
                else
                {
                    num/=10;
                    continue;
                }
        }
        cout<<"No. of 4's and 7's are number is : "<<cnt;
        cout<<"Do you want to continue ";
        cin>>ch;
    }
}
