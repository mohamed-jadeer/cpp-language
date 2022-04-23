#include<iostream>
using namespace std;
int main()
{
    int price ,notc ,notc_copy ,index = 0;//no_of_test1_cases
    int menu[12] ={2048,1024,512,256,128,64,32,16,8,4,2,1};
    cin>>notc;
    notc_copy = notc;
    int output[notc];
    for(int i = 0 ; i < notc ; i++)
        output[i] = 0;
    while(notc > 0)
    {
        cin>>price;
        while(price > 0)
        {
            if(price/menu[0] >= 1)
            {
                output[index] = price/menu[0];
                price %= menu[0];
            }
            else if(price/menu[1] >= 1)
            {
                output[index]++;
                price %= menu[1];
            }
            else if(price/menu[2] >= 1)
            {
                output[index]++;
                price %= menu[2];
            }
            else if(price/menu[3] >= 1)
            {
                output[index]++;
                price %= menu[3];
            }
            else if(price/menu[4] >= 1)
            {
                output[index]++;
                price %= menu[4];
            }
            else if(price/menu[5] >= 1)
            {
                output[index]++;
                price %= menu[5];
            }
            else if(price/menu[6] >= 1)
            {
                output[index]++;
                price %= menu[6];
            }
            else if(price/menu[7] >= 1)
            {
                output[index]++;
                price %= menu[7];
            }
            else if(price/menu[8] >= 1)
            {
                output[index]++;
                price %= menu[8];
            }
            else if(price/menu[9] >= 1)
            {
                output[index]++;
                price %= menu[9];
            }
            else if(price/menu[10] >= 1)
            {
                output[index]++;
                price %= menu[10];
            }
            else if(price/menu[11] >= 1)
            {
                output[index]++;
                price %= menu[11];
            }
        }
        notc--;
        index++;
    }
    for(int i = 0 ; i < notc_copy ; i++)
        cout<<output[i]<<endl;
    return 0;
}
