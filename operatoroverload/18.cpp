#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
//#include<fstream.h>
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
	friend istream& operator>>(istream&,Distance&);
	friend ostream& operator>>(ostream&,Distance&);
};

istream& operator>>(istream &in,Distance &d)
{
   cin>>d.feet>>d.inches;
}
ostream& operator<<(ostream &o<<,Distance &d)
{
   cout<<d.feet<<d.inches;
}
int main()
{  
    Distance d1;
    Distance d2;
    cin>>d1>>d2;
    cout<<d1;
    cout<<d2;
	return 0;
}