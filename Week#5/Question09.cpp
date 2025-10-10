#include<iostream>
using namespace std;
int main()
{
    int n,i,num;
    cout<<"Enter the number of terms in array...";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array...";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the number to be searched...";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<"\nThe Number "<<num<<" is found at position "<<i+1;
            break;
        }
    }
}
