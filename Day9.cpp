#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
    if(key==arr[i])
    {
        return 1;
    }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter element you want to search "<<endl;
    cin>>key;

    bool found=search(arr,10,key);
    if(found)
    {
        cout<<"key is present";
    }

    else{
    cout<<"key is not present";
    }
}
