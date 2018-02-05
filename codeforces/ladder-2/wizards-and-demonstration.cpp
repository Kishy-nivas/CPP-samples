//http://codeforces.com/problemset/problem/168/A


#include<iostream> 
#include<cmath> 
using namespace std;
int main()
{
	int x,w,z;
	cin>>x>>w>>z;
	int ans = (int)ceil((x*z)/100.0);
	ans= ans-w;

	cout<<ans<0? 0 : ans;
}