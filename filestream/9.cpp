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
	char ch;
    Person P;
    fstream file;
    file.open("person.txt",ios::app|ios::out|ios::in);
     
    do
    {
    	cout<<"Enter Person Data"<<endl;
    	P.getData();
    	file.write((char*)&p,sizeof(P));
    	cout<<"Enter Another Person:"<<endl;
    	cin>>ch;

    } 
    while(ch=='y'||ch=='Y');
    file.seekg(0);
    file.read((char*)&p,sizeof(P));
     
    while(!file.eof())
    {
    	P.showData();
    	file.read((char*)&p,sizeof(P));
    }
   
    file.close();
	return 0;
}