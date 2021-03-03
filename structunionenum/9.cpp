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

struct Student
{
 int rno;
 char name[25];
 float marks[5];
};
int main()
{
    int i;
    Student s;
    cin>>s.rno;
    gets(s.name);
    for (int i = 0; i < 5; ++i)
    {
    	cin>>s.marks[i];
    }
    cout<<s.rno;
    cout<<s.name;
    for (int i = 0; i < 5; ++i)
    {
    	cout<<s.marks[i];
    }
	return 0;
}