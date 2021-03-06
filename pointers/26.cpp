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
    int i,n=0;
    char ch;
    Distance *p[100];
    do
    {
    	p[n]=new Distance;
    	p[n]->getDsist();
    	n++;
    	cin>>ch;
    }
    while(ch=='Y'||ch=='y');
    for (int i = 0; i < n; ++i)
    {
    	p[i]->showDist();
    }
	return 0;
}