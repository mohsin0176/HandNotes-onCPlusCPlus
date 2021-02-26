#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{


   int num[10],i,pos=-1,value;
   cout<<"Enter 10 Numbers"<<endl;
   for (int i = 0; i < 10; ++i)
   {
   	 cin>>num[i];
   }
   cout<<"Enter The Number To Be Searched"<<endl;
   cin>>value;
   for (int i = 0; i < 10; ++i)
   {
   	if (num[i]==value)
   	{
   		cout<<"This is "<<(i+1)<<"th Element"<<endl;
   		cout<<"The Searched value is num["<<i<<"]="<<num[i]<<endl;
   		break;
   	}
   	else
    {
        continue;
    }
   }

	return 0;
}