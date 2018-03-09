#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    
    int revNoAd, revAd, cost;
    
    cin >> revNoAd >> revAd >> cost;
    
    if (revNoAd > (revAd - cost)){
      cout << "do not advertise" << endl;
    }
    
    else if (revNoAd < (revAd - cost))
    {
      cout << "advertise" << endl;
    }
    
    else{
      cout << "does not matter" << endl;
    }
    
  }

  return 0;
}
