#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m;    //n=人数,m=試合数
  cin>>n>>m;
  vector<int> win(m);
  vector<int> lose(m);

  for(int i=0;i<m;i++){
    cin>>win.at(i)>>lose.at(i);
  }

  vector<vector<char>> data(n,vector<char>(n,'-'));


  for(int i=0;i<m;i++){
    win.at(i)--;lose.at(i)--;
    data.at(win.at(i)).at(lose.at(i))='o';
    data.at(lose.at(i)).at(win.at(i))='x';
}

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<data.at(i).at(j);
      if(j!=n-1){
        cout<<" ";
      }
    }
    cout<<endl;
  }
}