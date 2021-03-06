#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;

class Distance
{

private:
	int feet;
	float inches;
public:
	Distance()
	{
		feet=0;
		inches=0.0;
	}
	Distance(int ft,float inches)
	{
		feet=ft;
		inches=in;
	}
	void getDist()
	{
		cin>>feet>>inches;
	}
	void showDist()
	{
		cout<<feet<<inches;
	}
	Distance operator+(Distance);
};

Distance Distance::operator+(Distance dd2)
{
	Distance dd3;
	dd3.feet=feet+dd2.feet;
	dd3.inches=inches+dd2.inches;
	if (dd3.inches>=12.0)
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
    Distance d2(10,6.0);
    d3=d1+d2;
    d4=d1+d2+d3;
	d1.showDist();
	d2.showDist();
	d3.showDist();
	d4.showDist();

	return 0;
}