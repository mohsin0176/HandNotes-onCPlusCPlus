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
    char ch;
    ifstream in;
    in.open("person.txt");
    in.seekg(0,ios::end);
    int size=in.tellg();
    int n=size/sizeof(P);
    cout<<"Number of person"<<n<<endl;
    cout<<"Enter Number of Person"<<endl;
    cin>>n;
    int pos=(n-1)*sizeof(p);
    in.seekg(pos);
    in.read((char*)&p,sizeof(P));
    P.showData();
    in.close();
	return 0;
}