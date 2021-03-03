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

struct Distance
{
	int feet;
	float inches;
};
void scale(Distance &,float);
void dispaly(Distance);

void dispaly(Distance dd)
{
	cout<<dd.feet<<dd.inches;
}

void scale(Distance &dd,float factor)
{
	float inches=(dd.feet*12+dd.inches)*factor;
	dd.feet=inches/12;
	dd.inches=inches-dd.feet*12;
}

int main()
{
	Distance d1={12,6.5};
	Distance d2={10,6};
	dispaly(d1);
	dispaly(d2);
	scale(d1,0.5);
	scale(d2,0.25);
	dispaly(d1);
	dispaly(d2);

	return 0;
}