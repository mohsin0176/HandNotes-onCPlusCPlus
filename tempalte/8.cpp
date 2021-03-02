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
    T1 getX(){return x;}
    T2 getY(){return y;}
};
int main()
{
    A<char,int> a1('B',10);
    a1.show();
    cout<<a1.getX();
    cout<<a1.getY();
    A<int,float> a2(10,12.34);
    a2.show();
    cout<<a2.getX();
    cout<<a2.getY();
    A<float,char> a3('12.34f','B');
    a3.show();
    cout<<a3.getX();
    cout<<a3.getY();
    A<double,int> a4(10.265,12);
    a4.show();
    cout<<a4.getX();
    cout<<a4.getY();

    return 0;
}