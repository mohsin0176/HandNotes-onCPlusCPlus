#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
using namespace std;

class Circle
{
private:
	float radius;
public:
	void getRadius()
	{
		cout<<"Enter Radius"<<endl;
		cin>>radius;
	}
	void area()
	{
		float ar;
		ar=PI*radius*radius;
		cout<<"Area of Circle"<<ar<<endl;
	} 
	void showRadius()
	{
		cout<<"Radius"<<radius<<endl;
	}
};


int main()
{
    Circle c1,c2;
    c1.getRadius();
    c2.getRadius();
    c1.showRadius();
    c1.area();
    c2.showRadius();
    c2.area();
	return 0;
}