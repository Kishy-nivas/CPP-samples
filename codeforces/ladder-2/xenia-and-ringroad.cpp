//http://codeforces.com/problemset/problem/339/B

#include<iostream> 
using namespace std;
int main()
{
	long n,m;
	long long time_taken = 0 ;
	long current_house = 1;
	cin>>n>>m;
	int *arr = new int[m];
	for (int i = 0; i < m; i++)
		cin>>arr[i];

	for(int i = 0; i<m; i++)
	{
		if(arr[i] > current_house)
			time_taken += arr[i]-current_house; 
		else if(arr[i] < current_house)
			time_taken += n-current_house + arr[i];
		current_house = arr[i];
	}
	cout<<time_taken<<"\n";

}