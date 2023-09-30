#include<iostream>
using namespace std;

// Program to find maximum and minimum elements in an array

int getmin(int num[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,num[i]);
        // if(num[i]<min)
        // {
        //     min=num[i];
        // }
    }
    // returning max value
    return mini;
}

int getmax(int num[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,num[i]);
        // if(num[i]>max)
        // {
        //     max=num[i];
        // }
    }
    // returning max value
    return maxi;
}

int main()
{
    int size;
    cin>>size;
    int num[2200];

    // Taking input in array

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getmax(num,size)<<endl;
    cout<<"Mininum value is "<<getmin(num,size);
}
