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
		int x;
	public:
		void getX()
		{
			cin>>x;
		}
		void showX()
		{
			cout<<x;
		}
	};
class B
	{
		int y;
	public:
		void getY()
		{
			cin>>y;
		}
		void showY()
		{
			cout<<y;
		}

	};

class C:public A,public B
	{
		int z;
	public:
		void getZ()
		{
			cin>>z;
		}
		void showZ()
		{
			cout<<z;
		}

	};



int main()
{   

    C c1;
    c1.getX();
    c1.getY();
    c1.getZ();
    c1.showX();
    c1.showY();
    c1.showZ();

	return 0;
}
