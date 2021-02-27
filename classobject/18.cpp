#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

class A
{
int x;
public:
	void show()
	{
		cout<<x<<endl;
	} 
	void show(int x)
	{
		cout<<x;<<endl
	}
};
int main()
{  
	A a1;
	a1.show();
	a1.show(100);

	return 0;
}