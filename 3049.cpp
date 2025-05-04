#include <iostream>

using namespace std;

int main(){

    int b, t;

    cin >> b;
    cin >> t;

    if( (b + t) * (70 / 2) > 11200 / 2)
        cout << 1 << endl;

    else if((b + t) * (70 / 2) < 11200 / 2)
        cout << 2 << endl;
    
    else
        cout << 0 << endl;
        
    return 0;
}