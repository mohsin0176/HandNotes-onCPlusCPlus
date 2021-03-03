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


int main()
{ 

	int a,b,res;
	char op;
	cin>>a>>b;
	switch(op)
	{
		case '+':
		res=a+b;
		break;
		case '-':
		res=a-b;
		break;
		case '*':
		res=a*b;
		break;
		case '/':
		res=a/b;
		break;
		case '%':
		res=a%b;
		break;
		default:
		cout<<"Wrong Operator"<<endl; 
		break;

	}
	cout<<a<<op<<b<<"="<<res<<endl;

	return 0;
}