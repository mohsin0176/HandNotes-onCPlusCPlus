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
	A(int a)
	{
		x=a;
		cout<<"Para Constructor"<<endl;
	}
	~A()
	{
		cout<<"A Destructor"<<endl;
	}
	virtual void show()
	{
		cout<<x;
	}

};

class B:public A
{
private:
	int y;
public:
	B(int a,int b):A(a)
	{
		y=b;
		cout<<"ParaConstructor"<<endl;
	}
	~B()
	{
		cout<<"B Destructor"<<endl;
	}
	void show()
	{
		cout<<y;
	}
};
class C:public A
{
private:
	int z;
public:
	C(int a,int c):A(a)
	{
		z=c;
		cout<<"ParaConstructor"<<endl;
	}
	~C()
	{
		cout<<"C Destructor"<<endl;
	}
	void show()
	{
		cout<<y;
	}
};

int main()
{   
	A *p;
	p=new A(10);
	p->show();
	delete p;

	B *p;
	p=new B(10,20);
	p->show();
	delete p;

	C *p;
	p=new C(10,30);
	p->show();
	delete p;



	return 0;
}