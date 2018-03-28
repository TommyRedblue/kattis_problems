#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <string> 
#include <map>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  cin.ignore();
    
  for(int i = 0; i < n; i++){
    
    std::map<char,int> alphaFound;
    alphaFound['a'] = 0;
    alphaFound['b'] = 0;
    alphaFound['c'] = 0;
    alphaFound['d'] = 0;
    alphaFound['e'] = 0;
    alphaFound['f'] = 0;
    alphaFound['g'] = 0;
    alphaFound['h'] = 0;
    alphaFound['i'] = 0;
    alphaFound['j'] = 0;
    alphaFound['k'] = 0;
    alphaFound['l'] = 0;
    alphaFound['m'] = 0;
    alphaFound['n'] = 0;
    alphaFound['o'] = 0;
    alphaFound['p'] = 0;
    alphaFound['q'] = 0;
    alphaFound['r'] = 0;
    alphaFound['s'] = 0;
    alphaFound['t'] = 0;
    alphaFound['u'] = 0;
    alphaFound['v'] = 0;
    alphaFound['w'] = 0;
    alphaFound['x'] = 0;
    alphaFound['y'] = 0;
    alphaFound['z'] = 0;
    
    string line = "";
    std::getline(std::cin, line);
    
    for(int j = 0; j < line.size(); j++){
      std::transform(line.begin(), line.end(), line.begin(), ::tolower);  
      
      char curr = line[j];
      
      std::map<char,int>::iterator it;
      it = alphaFound.find(line[j]);
      if(it != alphaFound.end()){
        int curr_val = alphaFound[curr];
        curr_val++;
        alphaFound[curr]=curr_val;
        
      }
      
    }
    
    string missings = "";
    for(std::map<char,int>::iterator it=alphaFound.begin(); it!=alphaFound.end(); ++it){
      if(it->second == 0){
        missings += it->first;
      }
    } 
    
    if(missings.size() > 0){
      cout << "missing " << missings << endl;
    }    
    
    else{
      cout << "pangram" << endl;
    }
  }
  
  
  return 0;
}


