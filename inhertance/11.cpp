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
private:
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

class Cylinder:private Circle
{
private:
float height;
public:
	void readHeight()
	{  
		readRadius();
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
		showRadHeight
		cout<<height;
	}

};

int main()
{   


Cylinder cl1;
cl1.readHeight();
cl1.showHeight();
float v=cl1.volume();
cout<<v;



	return 0;
}
