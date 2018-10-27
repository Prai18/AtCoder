/*A - Measure
時間制限 : 2sec / メモリ制限 : 1024MB

配点 : 100 点

問題文
英小文字からなる長さ 2 または 3 の文字列 S が与えられます。長さが 2 の場合はそのまま、長さが 3 の場合は逆順にして出力してください。

制約
S の長さは 2 または 3 である
S は英小文字からなる*/

#include<iostream>
#include<string>

using namespace std;

int main(){
   string st;

   cin>>st;

   if(st.length()==2){
   	for (int i = 0; i < st.size(); ++i)
   	{
   		cout<<st[i];
   	}
   		cout<<endl;
   }else{
   	for (int i = st.size()-1; i >=0; --i)
   	{
   		cout<<st[i];
   	}
  		cout<<endl;
   }
    return 0;
}   