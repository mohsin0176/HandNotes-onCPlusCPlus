
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

void Simp_Int( float, float, float);
void Simp_Int(float p, float r, float t )
{
	 
	 si=(p*r*t)/100;
	 return si;
}
int main()
{
    float p,r,t;
	cout<<"Enter Principal-Rate-Time"<<endl;
	cin>>p>>r>>t;
    cout<<Simp_Int(p,r,t);

	return 0;
}