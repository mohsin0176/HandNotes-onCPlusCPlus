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
	Distance(float ft)
	{
		feet=int(ft);
		inches=12*(f-feet);
	}
	void getDist()
	{
		cin>>feet>>inches;
	}
	void showDist()
	{
		cout<<feet<<inches;
	}
	friend Distance operator+(Distance,Distance);
};

Distance Distance::operator+(Distance dd1,Distance dd2)
{
	Distance dd3;
	dd3.feet=dd1feet+dd2.feet;
	dd3.inches=dd1inches+dd2.inches;
	if (dd3.inches>=12.0)
	{
		dd3.inches-=12.0;
		dd3.feet++;
	}
	return dd3;
}

int main()
{
    
    Distance d1(12,6);
    Distance d2(10,9);
    Distance d3,d4,d5;
    d3=d1+d2;
    d3.showDist();
    d4=d1+10;
	d4.showDist();
	d5=10+d1;
	d5.showDist();


	return 0;
}