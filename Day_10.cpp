#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    //Reversing an array

    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr,n);
    
    printarray(arr,n);
}
