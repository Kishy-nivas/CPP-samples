#include<iostream>
#include<algorithm> 
#include<set> 
#include<map>

using namespace std;

int main()
{
	
	int t;
	cin>>t; 
	while(t--)
	{
		map<string,int> mp;
		map<string,int>::iterator it; 

		int n;
		cin>>n;
		int max_count =1; 
		string most;
		for(int i =0;i<n;i++)
		{
			string s; 
			cin>>s;
			it= mp.find(s);
			if(it== mp.end())
				mp[s] =1;
			else 
				mp[s]+=1;

		}
		it = mp.begin();
		most = it->first; //initialize with the first string.

		for(it = mp.begin();it!=mp.end();it++)
		{
			if(it->second >max_count)
			{
				max_count=it->second;
				most= it->first;
			}
			else if(it->second == max_count)   //if the count is equal,then check lexi......
			{
				if (it-> first < most)
					most = it->first;
			}
		}
		cout<<most<<"\n";




	}
}