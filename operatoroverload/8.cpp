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
	void operator+=(Distance);
};

void Distance::operator+=(Distance dd2)
{
 
	 feet=feet+dd2.feet;
	 inches=inches+dd2.inches;
	 if (inches>=12.0)
	 {
	 	inches-=12.0;
	 	feet++;
	 }
}

int main()
{
    
    Distance d1,d4,d3;
    d1.getDist();
    Distance d2(10,6.0);
	d1.showDist();
	d2.showDist();
	d1+=d2;
	d1.showDist();

	return 0;
}