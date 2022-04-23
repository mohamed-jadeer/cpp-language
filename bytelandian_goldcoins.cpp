#include<iostream>
using namespace std;
int main()
{
    int notc , notc_copy , index = 0 , currency ,currency_temp;
    cin>>notc;
    notc_copy = notc;
    int output[notc];
    while(notc > 0)
    {
        cin>>currency;
        currency_temp =  (currency/2) + (currency/3) + (currency/4);
        if(currency_temp > currency)
            output[index] = currency_temp;
        else
            output[index] = currency;
        index++;
        notc--;
    }
    for(int i = 0 ; i < notc_copy ; i++)
        cout<<output[i]<<endl;
return 0;
}
