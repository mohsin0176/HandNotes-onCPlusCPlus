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

struct Book
{
	char name[25];
	char author[20];
	float price;
};
int main()
{
    Book b;
    gets(b.name);
    gets(b.author);
    cin>>b.price;
cout<<b.name<<endl;
cout<<b.price<<endl;
cout<<b.author<<endl;
	return 0;
}