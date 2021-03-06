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


class Distance
{

private:
	int feet;
	float inches;
public:
	void getDsist()
	{
		cin>>feet>>inches;
	}
	void showDist()
	{
		cout<<feet<<inches;
	}

};
int main()
{
    Distance *p;
    p=new Distance;
    p->getDsist();
    p->showDist();
	return 0;
}