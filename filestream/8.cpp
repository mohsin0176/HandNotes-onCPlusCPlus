#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;

class Person
{
char name[25];
    int age;
public:
	void getData()
	{
		cout<<"Enter name"<<endl;
		cin.getline(name,25);
		cout<<"Enter Age"<<endl;
		cin>>age;
	}

	void showData()
	{
		cout<<name<<endl;
		cout<<age<<endl;
	}
};

int main()
{
    Person P;
    ifstream in("person.txt");
    P.getData();
    in.read((char*)&p,sizeof(P));
    P.showData();
    in.close();
	return 0;
}