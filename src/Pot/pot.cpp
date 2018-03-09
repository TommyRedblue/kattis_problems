#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    
    int x;
    cin >> x;
    
    int powN = x % 10;
    
    int num = x / 10;
    
    sum += pow(num, powN);
    
    
  }
  
  cout << sum;
  
  
  return 0;
}
