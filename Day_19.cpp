#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int count=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			if(arr[i]+arr[j]==target)
			{
				count++;
			}
		}
	}

	if(count==0)
	{
		return -1;
	}

	return count;
}
