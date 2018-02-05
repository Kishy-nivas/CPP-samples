//http://codeforces.com/problemset/problem/122/A
#include<iostream>
using namespace std;

bool check_lucky(int a)
{
	int cpy = a;
	int digit;
	bool lucky = true;
	while(a)
	{
		digit = a % 10;
		a = a/10;

		if (digit ==7  || digit ==4)
		{
			continue;
		}
		else 
		{
			lucky = false;
			break;
		}
	}
	if(lucky)
		return true;
	else 
		return false;
	

}
bool check_divisble(int b)
{
	if(check_lucky(b))
		return true; 

	for(int i=4 ; i<=b/2;i++)
	{
		//cout<<"checked : "<<i<<"\n";
		if (check_lucky(i))
		{
			//cout<<i<<"\n";
			if(b%i ==0)
			{
				return true;
			}
		}
	}
	return false;
}



int main()
{
	int n ;
	cin>>n;
	bool ans = check_divisble(n);
	if (ans)
		cout<<"YES";
	else 
		cout<<"NO";

}