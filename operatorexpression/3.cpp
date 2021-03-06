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
cout<<"Logical And Operator";    
cout<<((10<20)&&(30<40));
cout<<((10<20)&&(30>40));
cout<<((10>20)&&(30<40));
cout<<((10>20)&&(30>40));
cout<<"Logical OR Operator";
cout<<((10<20)||(30<40));
cout<<((10<20)||(30>40));
cout<<((10>20)||(30<40));
cout<<((10>20)||(30>40));
cout<<"Logical NOT (!) Operator";
cout<<(!(10<20));    
cout<<(!(10>20));	
return 0;
}