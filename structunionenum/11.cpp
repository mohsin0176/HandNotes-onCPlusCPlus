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
struct Room
{
	Distance length;
	Distance width;
};

int main()
{
    Room drawing={{12,5.5},{16,5}};
    float l=drawing.length.feet+drawing.length.inches/12;
    float w=drawing.width.feet+drawing.width.inches/12;
    cout<<l*w;

	return 0;
}