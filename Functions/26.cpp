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

void Merge(int [],int,int [],int,int []);
void Merge(int A[],int M,int B[],int N,int C[])
{
	int a,b,c;
	for (a=0,b=0,c=0;a<M&&b<N;)
	{
		if (A[a]<B[b])
		{
			C[c++]=A[a++];
		}
		else
		{
			C[c++]=B[b++];
		}
	}

	if (a<M)
	{
		while(a<M)
		{
			C[c++]=A[a++];
		}
	}
	else
	{
		while(b<N)
		{
			C[c++]=B[b++];
		}
	}

}
int main()
{
   int A[50],B[50],C[100],MN=0,M,N;
   cin>>M;
   for (int i = 0; i < M; ++i)
   {
   	cin>>A[i];
   }
   cin>>N;
   for (int i = 0; i < N; ++i)
   {
   	cin>>B[i];
   }
   MN=M+N;
   Merge(A,M,B,N,C);

   for (int i = 0; i < MN; ++i)
   {
   	cout<<C[i];
   }
	return 0;
}