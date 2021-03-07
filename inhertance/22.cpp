#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;

class Circle
{
protected:
	float radius;
public:
	Circle()
	{
		radius=0;
	}
	Circle(float r)
	{
		radius=r;
	}
	void readRadius()
	{
		cin>>radius;
	}
	void showRadius()
	{
		cout<<radius;
	}
	float area()
	{
		float ar;
		ar=PI*radius*radius;
		return ar;
	}
	float getRadius()
	{
		return radius;
	}
	
};

class Cylinder
{
private:
float height;
Circle c;
public:
	Cylinder():c()
	{
		height=0;
	}
	Cylinder(float r,float h):c(r)
	{
		height=h;
	}
	void readHeight()
	{ 
        c.readRadius();
		cin>>height;
	}
	float volume()
	{
		float v;
		v=PI*getRadius()*getRadius()*height;
		return v;
	}
	void showHeight()
	{  
        c.showRadius();
		cout<<height;
	}

};

int main()
{   


Cylinder cl1(10,10);
cl1.showHeight();
cl1.readHeight();
cl1.showHeight();
float v=cl1.volume();
cout<<v;



	return 0;
}
