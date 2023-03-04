#include <bits/stdc++.h>
using namespace std;

void findElement(queue<int>& Q, int K){

  while(!Q.empty()){
    if(Q.front() == K){
      cout << " element found!";
      return;
    }
    Q.pop();
  }
  cout << " element not found! ";
}

int main(){

  queue<int> Q;

  Q.push(4);
  Q.push(3);
  Q.push(2);
  Q.push(1);

  int K = 3;
  findElement(Q, K);  //element found!
  return 0;
}