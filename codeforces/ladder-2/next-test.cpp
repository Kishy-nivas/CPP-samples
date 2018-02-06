//http://codeforces.com/problemset/problem/27/A
#include<iostream>
#include<algorithm> 


using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	vector<bool> present(3010,false);


	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
		present[arr[i]] = true;
	}

	for(int i =1;i<3010;i++)
	{
		if (present[i]==false)
		{
			cout<<i<<"\n";
			break;
		}
	}

	



}