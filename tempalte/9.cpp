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

template<class T>
class A
{
private:
	T x;
public:
	A()
	{}
	A (T a);
	void show();
};
template <class T>
 A<T>::A()
{
	
}
template <class T>
void A<T>::show(T a)
{
	x=a;
}
template <class T>
void A<T>::show()
{
	cout<<x;
}
int main()
{
    A<char> a1('B');
    a1.show();
    A<int> a2(10);
    a2.show();
    A<float> a3('12.34f');
    a3.show();
    A<double> a4(10.265);
    a4.show();

	return 0;
}