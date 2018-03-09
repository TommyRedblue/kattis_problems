#include <iostream>
using namespace std;


int main(){
  
  string authors = "";
  cin >> authors;
  
  string acro = "";
  acro += authors[0];
  
  for(int i = 0; i < authors.size(); i++){
    
    if(authors[i] == '-'){
      acro += authors[i+1];
    }
    
  }
  
  cout << acro;
  
  return 0;
}
