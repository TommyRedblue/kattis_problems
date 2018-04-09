#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  cin >> n;

  int sum = 0;
  for(int i = 0; i < n; i++){
    string line = "";
    cin >> line;

    if(line.find("CD") == string::npos){
      sum++;
    }

  }

  cout << sum;


  return 0;
}
