#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int valor = 0;

    for(int i = 0; i < n; i++){

        int pos = 0;

        for(int j = 0; j < 3; j++){

            char bit;
            cin >> bit;
            if(bit == '+'){ //lembrar que char eh aspas simples
                pos = 1;
            }

            else if(bit == '-'){
                pos = -1;
            }
        }

        if(pos == 1){
            valor ++;
        }

        else if(pos == -1){
            valor --;
        }
    }

    cout << valor << endl;

    return 0;
}