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
	Distance()
	{
		feet=0;
		inches=0;
	}
	Distance(int ft,float in)
	{
		feet=ft;
		inches=in;
	}

	Distance(float f)
	{
		feet=int(f);
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
	Distance square();

}; 
Distance Distance::square()
{
	Distance dd;
	float ft=feet+inches/12;
	ft=ft*ft;
	dd.feet=int(ft);
	dd.inches=12*(ft-dd.feet);
	return dd;
}
int main()
{
   Distance d1(12,9);
   Distance d2;
   d1.showDist();
   d2=d1.sqaure();
   d2.showDist();
	return 0;
}