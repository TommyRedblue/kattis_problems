#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {

  string inpCards = "";
  cin >> inpCards;
  
  std::vector<std::string> cards  = {};
  std::map<string, int> labels = {};
  
  labels.insert(std::pair<string,int>("P", 0));
  labels.insert(std::pair<string,int>("K", 0));
  labels.insert(std::pair<string,int>("H", 0));
  labels.insert(std::pair<string,int>("T", 0));
  
  bool printRest = true;
  
  string inpCopy = inpCards;
  for(int i = 0; i < inpCards.size()/3; i++){
    string card = inpCopy.substr(0,3);
    string cardLabel = card.substr(0,1);
    
    if (find(cards.begin(), cards.end(), card) != cards.end()){
      cout << "GRESKA";
      printRest = false;
    }
    
    if(labels.find(cardLabel) != labels.end()){
      labels[cardLabel] = labels[cardLabel] + 1;  
    }
    
    cards.push_back(card);
    inpCopy.erase(0,3);
  }
  
  if (printRest == true){
    cout << 13 - labels["P"] << " ";
    cout << 13 - labels["K"] << " ";
    cout << 13 - labels["H"] << " ";
    cout << 13 - labels["T"];
  }
  
 /* 
  std::map<string,int>::iterator it = labels.begin();
  for(it=labels.begin(); it!=labels.end(); it++){

    
    
    cout << it->first << it->second << " ";
  }
  
 */ 
  
  return 0;
}
