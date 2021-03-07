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
	void readRadius()
	{
		cin>>radius;
	}
	float area()
	{
		float ar;
		ar=PI*radius*radius;
		return ar;
	}
	
};

class Cylinder:public Circle
{
private:
float height;
public:
	void readHeight()
	{
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
		cout<<height;
	}

};

int main()
{   

Cylinder cl1;
cl1.readRadius();
cl1.readHeight();
cl1.showRadius();
cl1.showHeight();
float v=cl1.volume();
cout<<v;



	return 0;
}
