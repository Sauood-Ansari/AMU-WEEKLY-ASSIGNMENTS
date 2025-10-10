#include<iostream>
using namespace std;
int main()
{
    int n1,n2,k,i,j;
    cout<<"Enter the number of elements in frist array>>>"<<endl;
    cin>>n1;
    cout<<"Enter the number of elements in SECOND array>>>"<<endl;
    cin>>n2;    
    int ar1[n1],ar2[n2],merged[n1+n2];
    cout<<"Enter the elements of first array..."<<endl;
    for(i=0;i<n1;i++)    
        cin>>ar1[i];
    cout<<"Enter the elements of second array..."<<endl;
    for(i=0;i<n2;i++)   
        cin>>ar2[i];
    i=0;j=0;k=0;    
   for (; i < n1 && j < n2; k++) {
        if (ar1[i] <= ar2[j]) merged[k] = ar1[i++];
        else merged[k] = ar2[j++];
    }
    for (; i < n1; i++, k++) merged[k] = ar1[i];
    for (; j < n2; j++, k++) merged[k] = ar2[j];
    cout<<"Merged array is..."<<endl;
    for(i=0;i<(n1+n2);i++)
    {
        cout<<merged[i]<<", ";
    }          
            
}
