#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
//#include<cstdlib.h>
#include<limits.h>
//#include<iomanip.h>
#define PI 3.1416
using namespace std;

class A
{
private:
	int x;
public:
	void showAddress()
	{
		cout<<"Address of Object"<<this;
	}
};

int main()
{   
	A a1,a2,a3;
	a1.showAddress();
	a2.showAddress();
	a3.showAddress();
  
	return 0;
}