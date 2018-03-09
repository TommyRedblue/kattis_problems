#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        
        int b;
        double p;
        cin >> b;
        cin >> p;
        
        double bpm = (60*b)/p;
        
        //min
        double min = (bpm - (60/p));
        cout << fixed << setprecision(4) << min << " ";
        
        
        //bpm
        cout << fixed << setprecision(4) << bpm << " ";
        
        
        //max
        double max = (bpm + (60/p));
        cout << fixed << setprecision(4) << max << endl;

        
        
    }
    
    
    return 0;
}
