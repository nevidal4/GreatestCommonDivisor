#include <iostream>
#include <vector>
using namespace std;
//while b != 0
  //take number a and b
  //mod a by b and set to c
  //set a to b and set b to c
long long greatestCommonDivisor(long long a, long long b){
  long long c = 0;
  while(b != 0){
     c = a % b;
     a = b;
     b = c;
  }
  return a;
}

int main(){
  long long a = 0;
  long long b = 0;
  cin >> a >> b;
  cout << greatestCommonDivisor(a, b) << endl;
  return 0;
}
