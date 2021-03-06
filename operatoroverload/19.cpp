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

const float CF=3.280833;
class Distnace
{
private:
	int feet;
	float inches;
public:
	Distnace()
	{
		feet=0;
		inches=0;
	}
	Distnace(float m)
	{
		float ft=m*CF;
		feet=(int)ft;
		inches=12*(ft-feet);
	}
	Distnace(int ft,float in)
	{
		feet=ft;
		inches=in;
	}
	void getDist()
	{
		cin>>feet>>inches;
	}
	void showDist()
	{
		cout<<feet<<inches;
	}
	operator float()
	{
		float ft=feet+(inches/12);
		return (ft/CF);
	}
};
int main()
{
    Distnace d1=1.0;
    d1.showDist();
    d1=2.0;
    d1.showDist();
    Distnace d2(10,6.0);
    float m=float(d2);
    cout<<m;
    m=d1;
    cout<<m;
	return 0;
}