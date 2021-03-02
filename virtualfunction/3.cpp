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

class Shape
{

protected:
	float width,height;
public:
	Shape(float a=0,float b=0)
	{
		width=a;
		height=b;
	}
	void area()
	{
		cout<<0;
	}

};

class Rectangle:public Shape
{
public:
	Rectangle(float a=0.0,float b=0.0):Shape(a,b){}
	void area(){cout<<width*height;}

};
class Triangle:public Shape
{
public:
	Triangle(float a=0,float b=0.0):Shape(a,b){}
	virtual void area()=0; 
};


int main()
{  
	Shape *shape;
	Rectangle rec(10,7);
	Triangle tri(10,5);
	shape=&rec;
	shape->area();
	shape=&tri;
	shape->area();

	return 0;
}