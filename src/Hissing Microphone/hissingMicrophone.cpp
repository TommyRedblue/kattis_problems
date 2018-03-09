#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "";
    cin >> s;
    
    if (s.find("ss") != string::npos){
        cout << "hiss";
    }
    
    else{
        cout << "no hiss";
    }
    
    
    return 0;
}
