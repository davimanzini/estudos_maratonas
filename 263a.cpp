#include <bits/stdc++.h>
using namespace std;

int main(){

    int linha, coluna, output;
    output = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int valor;
            cin >> valor;
            if(valor == 1){
                linha  = i;
                coluna = j;
            }
        }
    }

    output = abs(2 - linha) + abs(2 - coluna);

    cout << output << endl;

    return 0;
}