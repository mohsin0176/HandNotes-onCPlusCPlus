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
const int size=3;
struct Book
{
	char name[25];
	int page;
	int price;
};
int main()
{
    int i;
    Book b1[size];
    for (int i = 0; i < size; ++i)
    {
    	gets(b1[i].name);
    	cin>>b1[i].page;
    	cin>>b1[i].price;
    }
    for (int i = 0; i < size; ++i)
    {
    	cout<<b1[i].name<<endl;
    	cout<<b1[i].page<<endl;
    	cout<<b1[i].price<<endl;
    }
	return 0;
}