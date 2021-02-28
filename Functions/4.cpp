
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

void Simp_Int();
void Simp_Int()
{
	 float p,r,t,si;
	 cout<<"Enter Principal-Rate-Time"<<endl;
	 cin>>p>>r>>t;
	 si=(p*r*t)/100;
	 return si;
}
int main()
{
    cout<<Simp_Int();

	return 0;
}