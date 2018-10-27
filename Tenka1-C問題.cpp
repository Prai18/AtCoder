/*C - Align
時間制限 : 2sec / メモリ制限 : 1024MB

配点 : 400 点

問題文
整数が N 個与えられます。i 個目の整数は Ai です。 これらを好きな順に一列に並べるとき、隣り合う要素の差の合計の最大値を求めてください。

制約
2≤N≤105
1≤Ai≤109
入力はすべて整数である*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  int sum=0;
  cin>>n;
  vector<int> ve(n);

  

  for (int i = 0; i < n; ++i)
  {
    cin>>ve[i];
  }

  for (int i = 0; i < n; ++i)
  {
    cout<<ve[i];
  }
  cout<<endl;
  return 0;
}   