#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define ll long long

void handle_io(bool end, string filename=""){
  if(end){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  }

  if(sizeof(filename) > 0){
    freopen(filename+".in", "r", stdin);
    freopen(filename+".out", "w", stdout);
  }
}

int main(){
  handle_io(true);

  return 0;
}
