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

class A
{
private:
	int x;
public:
	void get(){cin>>x;}
	void show(){cout<<x;}
};
class B :public A
{
private:
	int y;
public:
	void get(){cin>>y;}
	void show(){cout<<y;}
};
class C :public A
{
private:
	int z;
public:
	void get(){cin>>z;}
	void show(){cout<<z;}
};


int main()
{
    A a1;
    B b1;
    C c1;

        
	a1.get();
	b1.get();
    c1.get(); 
	a1.show();
	b1.show();
    c1.show(); 
	return 0;
}
