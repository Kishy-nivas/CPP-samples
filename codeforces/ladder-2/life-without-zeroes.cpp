//http://codeforces.com/problemset/problem/75/A

#include<iostream>
using namespace std;

int remove_zeroes(int num)
{
	int digit=0;
	int tens=1;
	int last_digit;
	while(num)
	{
		last_digit = num %10; 
		num=num/10;
		if(last_digit)
		{
			digit += last_digit * tens;
			tens *=10;
			


		}
		
	}
	return digit;

}
int main()
{
	int a,b,c;
	cin>>a>>b;
	c = a+b;

	if(remove_zeroes(a) + remove_zeroes(b) == remove_zeroes(c))
	{
		cout<<"YES"<<"\n";
	}
	else 
		cout<<"NO"<<"\n";


}