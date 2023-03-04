#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<int> myqueue){

  while(!myqueue.empty()){

    cout << myqueue.front() << ' ';
    myqueue.pop();
  }
}

int main(){

  queue<int> myqueue;
  for (int i = 1; i < 5; i++){
    myqueue.push(i);  //queue 1 2 3 4
  }

  printQueue(myqueue);
  cout << endl;
  myqueue.pop(); //queue 2 3 4

  printQueue(myqueue);
  return 0;
}