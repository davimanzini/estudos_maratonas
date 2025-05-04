#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int sequencia[n];

    for(int i = 0; i < n; i++){

        int numero;
        cin >> numero;
        sequencia[i] = numero;
    }

    int circulos = 1;
    for(int j = 1; j < n; j++){

        if(sequencia[j] != sequencia[j - 1]){
            circulos ++;
        }
    }

    cout << circulos << endl;

    return 0;
}