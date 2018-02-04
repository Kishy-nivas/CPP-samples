#include <iostream>
#include<vector> 
using namespace std;

int main() {
	//code
	int t,leafs,caterpillars; 
	cin>>t;
	while(t--)
	{
	    cin>>leafs;
	    cin>>caterpillars;
	    vector<int> c; 
	    while(caterpillars--)     // Getting input 
	    {
	        int val;
	        cin>>val;
	        c.push_back(val);
	        
	        
	    }
	    vector<int> v(leafs+1,1);            // initializing 
	    v[0] = 0;
	    
	    for(vector<int>::iterator i=c.begin();i!=c.end();i++)
	    {
	    	if(v[*i]!=0)
	    	{
	    		for(int j= *i;j<=leafs;j+=*i)
	    			v[j]=0;
	       }
	      	            
	    }
	    int ans_count =0; 
	    for(int i=0;i<=leafs;i++)
	    {
	        if(v[i]==1)
	        ans_count+=1; 
	        
	    }
	    cout<<ans_count;
	    
	}
}