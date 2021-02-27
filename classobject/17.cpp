#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

class Distance
{

private:
	int feet;
	float inches;
public:
	void getDist()
	{
		cout<<"Enter feet and inches"<<endl;
		cin>>this->feet>>this->inches;
	} 
	void showDist()
	{
		cout<<this->feet<this->inches;
	}
};
int main()
{
    Distance d1,d2;
    d1.getDist();
    d2.getDist();
    d1.showDist();
    d2.showDist();
	return 0;
}