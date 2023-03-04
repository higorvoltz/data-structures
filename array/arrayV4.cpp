#include <iostream>
using namespace std;

void findElement(int arr[], int N, int K){

  for (int i = 0; i < N; i++){
    if (arr[i] == K){
      cout << "element found";
      return;
    }
  }
  cout << "element not found";
}

int main(){
  int arr[] = {1,2,3};
  int K = 2;  //element found
  int N= sizeof(arr) / sizeof(arr[0]);

  findElement(arr, N, K);
  return 0;
}