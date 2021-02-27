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
	A(int a)
	{
		x=a;
	}
	void showX()
	{
		cout<<x;
	}

};
int main()
{
    int a;
    cout<<"Enter A Number"<<endl;
    cin>>a;
    A a1(a);
    a1.showX();
	return 0;
}