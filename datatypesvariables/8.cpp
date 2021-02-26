#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
 
    float ci,p,r,n,a;
    cout<<"Enter Principal,Rate of Interest and Time"<<endl;
    cin>>p>>r>>n;
    a=p*pow((1+(r/100)),n);
    ci=a-p;
    cout<<"Compound Interest"<<ci<<endl;
	return 0;
}