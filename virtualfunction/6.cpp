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
	int *px;
public:
	A(int a)
	{
		px=new int(a);
		cout<<"Para Constructor"<<endl;
	}
	~A()
	{
		cout<<"A Destructor"<<endl;
		delete px;
	}
	virtual void show()
	{
		cout<<*px;
	}

};

class B:public A
{
private:
	int *py;
public:
	B(int a,int b):A(a)
	{
		py=new int(b);
		cout<<"B ParaConstructor"<<endl;
	}
	~B()
	{
		cout<<"B Destructor"<<endl;
		delete py;
	}
	void show()
	{
		cout<<*py;
	}
};
class C:public A
{
private:
	int *pz;
public:
	C(int a,int c):A(a)
	{
		pz=new int (c);
		cout<<" C ParaConstructor"<<endl;
	}
	~C()
	{
		cout<<"C Destructor"<<endl;
		delete pz;
	}
	void show()
	{
		cout<<*pz;
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