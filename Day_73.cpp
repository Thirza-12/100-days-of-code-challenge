#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
  vector<int>v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);
  v.push_back(9);

  cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;// returns boolean value
  rotate(v.begin(),v.begin()+2,v.end());// first two elements will be placed at last.
  cout<<"After rotate"<<endl;
  for(int i:v)
    {
      cout<<i<<" ";
    }
  cout<<endl;
  cout<<"Sorting"<<endl;
  sort(v.begin(),v.end());// sort in ascending order
  for(int i:v)
    {
      cout<<i<<" ";
    }
  cout<<endl;
  // lower bound at 5 returns index of 5
  cout<<"Lower bound "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;  
  cout<<"Upper bound "<<upper_bound(v.begin(), v.end(),6)-v.begin()<<endl;  
  int a=3;
  int b=5;
  cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;
  swap(a,b);
  cout<<"a = "<<a<<" b = "<<b<<endl;

  string s="abcd";
  reverse(s.begin(),s.end());
  cout<<s;
  
  
}
