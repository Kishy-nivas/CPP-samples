//http://codeforces.com/problemset/problem/337/A

#include<iostream> 
#include<algorithm> 
#include<climits> 


using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int min_value = INT_MAX;
	int *arr = new int[m];

	for(int i = 0; i < m; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int curr_value = 0;

	for(int i = 0 ; i <= m-n;i++)
	{
		//cout<<arr[n+i-1]<<" "<<arr[i]<<"\n";
		curr_value = arr[n+i-1] - arr[i];
		if (curr_value < min_value)
			min_value = curr_value;

	}
	cout<<min_value;
}