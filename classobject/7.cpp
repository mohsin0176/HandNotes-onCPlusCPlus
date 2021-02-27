#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
using namespace std;

class A
{
	int x;
public:
	void getX()
	{
		cout<<"Enter x"<<endl;
		cin>>x;
	}
	void showX() const
	{
		cout<<"x :"<<x;
	}

};

int main()
{
    
    A a1;
    a1.getX();
    a1.showX();

	return 0;
}