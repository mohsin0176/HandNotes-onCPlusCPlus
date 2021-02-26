#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int arr[5];
    int i,j,t;
    for (int i = 0; i < 4; ++i)
    {
        cout<<"Enter value"<<(i+1)<<endl;
        cin>>arr[i];
    }
    cout<<"The Elements before reversing are"<<endl;
    for (int i = 0; i < 4; ++i)
    {
        cout<<arr[i]<<endl;
    }
    for(i=0,j=4;i<=4,j=>0;i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    } 
    cout<<"The Elements After reversing"<<endl;
    for (int i = 0; i < 4; ++i)
    {
        cout<<arr[i]<<endl;
    }

	return 0;
}
