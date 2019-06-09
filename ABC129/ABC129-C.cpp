/*
*/

#include<iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;

int main(){

	int n,m;
	cin>>n>>m;

	int a[m];	//壊れた床
	int pattern;
	// for (int i = 0; i < m; ++i)
	// {
	// 	cin>>a[i];		
	// }
	
	int b[n];

	b[0]=0;
	b[1]=1;
	b[2]=2;
	b[3]=3;

	for (int i = 3; i < n; ++i)
	{
		pattern+=b[i-1];

	}


	printf("%d\n",pattern);
	
	return 0;
}


