#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;


int main()
{  
	class A
	{
	private:
		int x;
	public:
		void getX()
		{
			cout<<"Enter x"<<endl;
			cin>>x;
		} 
		void showX()
		{
			cout<<x;
		}
	} 

	A a1,a2;
	a1.getX();
	a2.getX();
	a1.showX();
	a2.showX();

	return 0;
}