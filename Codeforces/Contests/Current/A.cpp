#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define ll long long

void handle_io(bool end, string filename=""){
  if(end){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  }

  if(filename.length() > 0){
    freopen((filename+".in").c_str(), "r", stdin);
    freopen((filename+".out").c_str(), "w", stdout);
  }
}

int main(){
  handle_io(true);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i = 1; i <= n-1; i++){
      for(int j = n; j > i; j--){
        cout << j << ' ';
      }
    }


  }

  return 0;
}

/*
*/
