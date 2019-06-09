/*空港 A, B, C があり、それぞれの空港の間では、双方向に飛行機が運航しています。

空港 A, B 間の飛行時間は片道 
P時間、
空港 B, C 間の飛行時間は片道 
Q時間、
空港 C, A 間の飛行時間は片道 
R時間です。

いずれかの空港からスタートして他の空港に飛行機で移動し、さらにそのどちらでもない空港に飛行機で移動するような経路を考えます。

飛行時間の和は最短で何時間になるでしょうか。*/

#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<vector>

using namespace std;

int main(){

vector<int> v;
int a;
int ans;

for (int i = 0; i < 3; ++i)
{
  cin>>a;
  v.push_back(a);
}

sort(v.begin(), v.end());

v.pop_back();

ans=v[0]+v[1];


printf("%d\n",ans);
  return 0;
}

