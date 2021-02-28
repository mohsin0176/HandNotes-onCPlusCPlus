#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#define PI 3.1416
using namespace std;


int main()
{
    
    char name[25];
    int age;
    ofstream out("test.txt");
    cout<<"Enter Name"<<endl;
    cin.getline(name,25);
    cout<<"Enter Age"<<endl;
    cin>>age;
    out<<name;
    out<<age;
    out.close();
    ifstream in("test.txt");
    in>>name;
    cout<<name;
    in>>age;
    cout<<age;
    in.close();
	return 0;
}