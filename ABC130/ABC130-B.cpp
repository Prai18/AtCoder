#include<iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int l[n];
	int d[n];
	int count=1;

	for (int i = 0; i < n; ++i)
	{
		cin>>l[i];
	}

	d[0]=0;

	for (int i = 0; i < n; ++i)
	{
		if(i<=n-1){
		d[i+1]=d[i]+l[i];
		if(d[i+1]<=x){
			count++;
		}
	}
	}

	printf("%d\n",count);
	return 0;
}


