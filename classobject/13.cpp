#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	void getDist()
	{
		cout<<"Enter feet & inches"<<endl;
		cin>>feet>>inches;
	} 
	void showDist()
	{
		cout<<feet<<inches;
	} 

	Distance addDist(Distance,Distance);
}; 


Distance Distance::addDist(Distance dd2)
{
	Distance dd3;
	dd3.feet=feet+dd2.feet;
	dd3.inches=inches+dd3.inches;
	if(dd3.inches>=12.0)
	{
		dd3.inches-=12.0;
		dd3.feet++;
	} 
	return dd3;
}
int main()
{
    
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist();
    d3=d1.addDist(d2);
	d1.showDist();
	d2.showDist();
    d3.showDist(); 
	return 0;
}