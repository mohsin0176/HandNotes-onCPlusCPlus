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
private:
	int x;
public:
	void getX()
	{
		cout<<"Enter X"<<endl;
		cin>>this->x;
	} 

	void callGetX()
	{
		this->getX();
	} 
	int showX()
	{
		return this->x;
	}
};

int main()
{
    
    A a1;
    a1.callGetX();
    cout<<a1.showX();
	return 0;
}