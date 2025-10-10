//Question07

#include<iostream>
using namespace std;
int main()
{
    int n,i,pos=0,neg=0,even=0,odd=0,zero=0;
    cout<<"Enter the number of elements ...."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array ...."<<endl;    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Positive elements are..."<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)        
        {
            cout<<arr[i]<<", ";
            pos++;
        }
        else if(arr[i]==0)
        zero++;
    }
    cout<<"\nHence number of positive elements are "<<pos<<endl;
    cout<<"Negative elements are..."<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)        
        {
            cout<<arr[i]<<", ";
            neg++;
        }
    }
    cout<<"\nHence number of negative elements are "<<neg<<endl;
    cout<<"Even elements are..."<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]!=0)        
        {
            cout<<arr[i]<<", ";
            even++;
        }
    }
    cout<<"\nHence number of even elements are "<<even<<endl;
    cout<<"Odd elements are..."<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && arr[i]!=0)        
        {
            cout<<arr[i]<<", ";
            odd++;
        }
    }
    cout<<"\nHence number of odd elements are "<<odd<<endl;
    cout<<"Number of zeroes are "<<zero<<endl;
}
