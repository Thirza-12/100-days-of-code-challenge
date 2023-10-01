#include<iostream>
using namespace std;
int sumofarr(int arr[],int n)
{
    // sum of all elements in an array
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin>>size;
    int arr[100000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"sum of array elements are "<<sumofarr(arr,size);
}
  
