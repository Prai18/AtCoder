/*
問題文
縦 H行横 W列のグリッドが与えられます。このグリッドのうち、いくつかのマスには障害物が存在します。
すぬけ君は、障害物のないマスのうち一つを選び、そのマスに明かりを設置しようとしています。 設置されたマスから、上下左右の四方向にまっすぐに光線が伸びます。それぞれの方向について、最初に障害物が存在するマスにぶつかる、もしくはグリッドの端にぶつかる手前のマスまで照らされます。明かりを設置したマスも照らされますが、障害物が存在するマスは照らされません。
すぬけ君は明かりによって照らされるマスの個数を最大化したいです。
H個の長さ Wの文字列 Si(1≤i≤H)が与えられます。Siの 
j文字目 (1≤j≤W) が # のとき、グリッドの上から i行目で左から j列目のマスには障害物があり、 . のときは障害物がありません。
照らされるマスの個数の最大値を求めてください。

制約
1≤H≤2,000
1≤W≤2,000
Siは # と . のみからなる長さ Wの文字列
Si(1≤i≤H) のうちいずれかに . は最低 
1つ存在する
*/

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)		//repマクロ

using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;

	vector<long long> vec(n);

	long long count=0;

	long long tmp=0,tmp2=0;

	rep(i,n){
		cin>>vec[i];
	}


	for (long long i = 0; i < n; ++i)
	{
		tmp +=vec[i];
		for (long long j = tmp2; j <= i; ++j)
		{
			if(tmp>=k){
				count+=n-i;
				tmp-=vec[tmp2];
				tmp2++;
			}else{
				break;
			}
		}

	}

	printf("%d\n",count);

	return 0;
}

