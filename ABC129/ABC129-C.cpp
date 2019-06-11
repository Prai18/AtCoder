/*
問題文
N段の階段があります。高橋君は現在、上り口(0段目)にいます。
高橋君は一歩で 1段か 2段上ることができます。
ただし、a1,a2,a3,....aM段目の床は壊れており、その段に足を踏み入れることは危険です。
壊れている床を踏まないようにしながら、最上段(N段目)にたどりつくまでの移動方法は何通りあるでしょうか？
総数を 1,000,000,007で割った余りを求めてください。

制約
1≦N≦10^5
0≦M≦N−1
1≦a1<a2< ... <a_M≦N−1
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)		//repマクロ

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	vector<bool> broken(n+1);

	rep(i,m){
		int a;
		cin>>a;
		broken[a]=true;
	}

	vector<int> dp(n+2);
	const int mod=1000000007;
	dp[n]=1;
	for (int i = n-1; i >= 0; --i)
	{
		if(broken[i]){
			dp[i]=0;
			continue;
		}
		dp[i]=(dp[i+1]+dp[i+2])%mod;
		printf("%d\n",dp[i]);
	}
	cout<<dp[0]<<endl;
	return 0;
}