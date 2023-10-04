#include<iostream>
using namespace std;

void swapalternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
            // int temp=arr[i+1];
            // arr[i+1]=arr[i];
            // arr[i]=temp;
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // swap alternate

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapalternate(arr,n);
    
    printarray(arr,n);
}
