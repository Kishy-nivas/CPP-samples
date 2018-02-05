//http://codeforces.com/problemset/problem/102/B

#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count = 0;
	int sum = 0;
	//cout<<s.length()<<"\n";
	while(s.length() > 1)
	{
		for(int i=0 ;i<(int) s.length(); i++)
		{
			sum += s[i]-'0';
			//cout<<s[i]-'0'<<"\n";
			
		}
		count++;
		s= to_string(sum);
		//cout<<"current string"<<s<<"\n";
		sum =0 ;
	

	}
	cout<<count;

}