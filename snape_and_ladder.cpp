#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int no_of_test_cases , no_of_test_cases_copy , b , ls , index = 0;
    cin>>no_of_test_cases;
    no_of_test_cases_copy = no_of_test_cases;
    int temp1[no_of_test_cases] , temp2[no_of_test_cases];
    while(no_of_test_cases > 0)
    {
        cin>>b>>ls;
        temp1[index]=((ls*ls) - (b*b));
        temp2[index]=((ls*ls) + (b*b));
        no_of_test_cases--;
        index++;
    }
    for(int i = 0 ; i < no_of_test_cases_copy ; i++)
        cout<<sqrt(temp1[i])<< " "<<sqrt(temp2[i])<<endl;
    return 0;
}
