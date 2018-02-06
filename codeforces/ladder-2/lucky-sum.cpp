//http://codeforces.com/problemset/problem/121/A


#include <iostream>
#include<algorithm> 
#include<vector>
using namespace std;
vector<long long int> lucky_numbers;

void fill_lucky(long long x,long long r)
{
  lucky_numbers.push_back(x);
  if (x>r*10)
    return;
  fill_lucky(x*10+4,r);
  fill_lucky(x*10+7,r);
}

int main() {
  long long  l,r;
  cin>>l>>r;
  
  fill_lucky(0,r);
  //for(int i =0;i<lucky_numbers.size();i++)
    //cout<<lucky_numbers[i]<<"\n";
    sort(lucky_numbers.begin(),lucky_numbers.end());
    long long sum =0;
  for(long long int i =1 ; i <lucky_numbers.size();i++)         //iterate through all the lucky numbers 
  {

    if(lucky_numbers[i]>=l && lucky_numbers[i] <=r)          // check if it falls within the range, 
    {
      sum+= (lucky_numbers[i]-l+1) * lucky_numbers[i];             // it gives the number of element in this range
      l= lucky_numbers[i]+1;									//update new start range 
    }

    else if(lucky_numbers[i]>=l && lucky_numbers[i] > r )
    {
      sum+= (r-l+1) * lucky_numbers[i]; 					// calculate for the remaining 
      break;
      
    }
    
  }
  cout<<sum<<"\n";
    
}