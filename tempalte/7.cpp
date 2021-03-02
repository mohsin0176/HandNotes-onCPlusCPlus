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

template<class T1,class T2>
class A
{
private:
	T1 x;
    T2 y;
public:
	A()
	{}
	A (T1 a,t2 b){x=a;y=b;}
	void show(){cout<<x<<y;}
};
int main()
{
    A<char,int> a1('B',10);
    a1.show();
    A<int,float> a2(10,12.34);
    a2.show();
    A<float,char> a3('12.34f','B');
    a3.show();
    A<double,int> a4(10.265,12);
    a4.show();

	return 0;
}