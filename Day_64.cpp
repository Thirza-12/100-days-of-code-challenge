int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==arr[i+1])
		{
			i++;
		}
		else
		{
			return arr[i];
		}
	}
	return -1;
}
