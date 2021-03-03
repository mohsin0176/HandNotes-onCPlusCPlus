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
    char op;
    int a,b,res;
    cin>>a>>b>>op;
    if (op=='+')
    {
    	res=a+b;
    }
    else if (op=='-')
    {
    	res=a-b;
    }
    else if (op=='*')
    {
    	res=a*b;
    }
    else if (op=='/')
    {
    	res=a/b;
    }
    else if (op=='%')
    {
    	res=a%b;
    }
    else
    {
    	cout<<"Wrong Operator"<<endl;
    }

    cout<<a<<op<<b<<"="<<res;
	return 0;
}