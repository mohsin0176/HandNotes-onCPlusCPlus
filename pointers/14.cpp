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
int main()
{
    Distance d;
    Distance *p;
    p=&d;
    p->feet=10;
    p->inches=6.5;
    cout<<p->feet<<p->inches<<endl;
	return 0;
}

