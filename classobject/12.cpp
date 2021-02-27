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

	void addDist(Distance,Distance);
};

void Distance::addDist(Distance dd1,Distance dd2)
{
	feet=dd1.feet+dd2.feet;
	inches=dd1.inches+dd2.inches;
	if (inches>=12.0)
	{
		inches-=12.0;
		feet++;
	}
}
int main()
{
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist();
    d3.addDist(d1,d2);
    d1.showDist();
    d2.showDist();
    d3.showDist();
	return 0;
}