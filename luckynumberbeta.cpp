#include<iostream>
using namespace std;
int check_lucky(int cnt);
int main()
{
    int lnum , rnum , num ,no_of_test_cases, no_of_test_cases_copy,index=0;
    cin>>no_of_test_cases;
    int cnt;
    int reqcnt[no_of_test_cases];
    no_of_test_cases_copy = no_of_test_cases;
    for(int i=0 ; i<no_of_test_cases_copy ; i++)
    {
        reqcnt[i] = 0;
    }
    //cout<<"Initial count finished"<<endl;
    while(no_of_test_cases > 0)
    {
        cin>>lnum;
        cin>>rnum;
        for(num=lnum ; num<=rnum ; num++)
        {
            cnt = 0;
            int num1=num;
            //int y = check_lucky(num1);
            //if(y == 0)
            //{
                while(num1 > 0)
                {
                    if(num1%10 == 4 || num1%10 == 7)
                    {
                        cnt++;
                        num1/=10;
                    }
                    else
                    {
                        num1/=10;
                        continue;
                    }
                }
                if(cnt>0)
                {int x = check_lucky(cnt);
                if(x==0)
                    reqcnt[index]++;
                }
            //}
            //else
                //continue;
        }
        //cout<<"Count = "<<cnt[index]<<endl;
        no_of_test_cases--;
        index++;
    }
    //cout<<"hai";
    for(int i=0 ; i<no_of_test_cases_copy ; i++)
    {
        cout<<reqcnt[i]<<endl;
    }
    return 0;
}

int check_lucky(int cnt)
{
    while(cnt > 0)
        {
                if(cnt%10 == 4 || cnt%10 == 7)
                {
                    cnt/=10;
                    continue;
                }
                else
                {
                    return 1;
                }
        }
    return 0;
}

