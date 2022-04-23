#include<iostream>
using namespace std;
int main()
{
	int notc,notc_copy , num , index = 0;
	cin>>notc;
	int output[notc];
	notc_copy = notc;
	while(notc > 0)
	{
		cin>>num;
		if(num%2 == 0)
			output[index] = num;
		else
			output[index] = num - 1;
	notc--;
	index++;
	}
	for(int i = 0 ; i < notc_copy ; i++)
		cout<<output[i]<<endl;
	return 0;
}
