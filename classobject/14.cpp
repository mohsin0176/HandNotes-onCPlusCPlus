#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

const int MAX=5;
class Distance
{
private:
	int feet;
	float inches;
public:
	void getDist()
	{
		cout<<"Enter feet and inches"<<endl;
		cin>>feet>>inches;
	}
	void showDist() const
    {
    	cout<<feet<<inches;
    }
};

int main()
{   
    Distance d[MAX];
    for (int i = 0; i < MAX; ++i)
    {
    	d[i].getDist();
    } 
    for (int i = 0; i < MAX; ++i)
    {
    	d[i].showDist();
    }
	return 0;
}