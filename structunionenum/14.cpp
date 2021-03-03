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
void display(Distance);
void display(float);
void display(Distance dd)
{
	cout<<dd.feet<<dd.inches;
}
void display(Distance dd)
{
	cout<<dd.feet<<dd.inches;
}
int main()
{
    Distance d1;
    float d2;
    cin>>d1.feet>>d1.inches;
    cin>>d2;
    display(d1);
    display(d2);
	return 0;
}