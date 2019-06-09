/*問題文
1から Nの番号がついた N個の重りがあり、番号 iの重りの重さは Wiです。
ある整数 
1≤T<Nに対してこれらの重りを、番号が T以下の重り と 番号が Tより大きい重りの 2グループに分けることを考え、それぞれのグループの重さの和を S1,S2とします。
このような分け方全てを考えた時、S1 と S2の差の絶対値の最小値を求めてください。

制約
2≤N≤100
1≤Wi≤100
入力は全て整数である*/

#include<iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;

int main(){

	int n;
	cin>>n;
	int sum1=0,sum2=0;
	int difference;
	int ans;
	int w[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>w[i];
	}

	for (int t = 0; t < n; ++t)
	{
		for (int i = 0; i < n; ++i)
		{
			if(i<t){
				sum1+=w[i];
			}else{
				sum2+=w[i];
			}

		}
		ans=abs(sum1-sum2);
		if(difference>ans){	
			difference=ans;
		}
		sum1=0;
		sum2=0;
	}

	printf("%d\n",difference);
	return 0;
}


