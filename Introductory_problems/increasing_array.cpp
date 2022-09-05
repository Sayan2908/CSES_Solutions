#include<iostream>
using namespace std;
int main()
{
    long int n,i,s=0,diff;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(n-1);i++)
    {
        if(arr[i]>arr[i+1])
        {
            diff=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
        
        s+=diff;diff=0;

    }
    cout<<s;
    return 0;
}