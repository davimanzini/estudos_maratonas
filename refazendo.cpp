#include <bits/stdc++.h>
using namespace std;

int main(void){

    int n, minimo, numero, aux;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> numero;
        minimo = numero % 10;

        if(numero / 10 == 0){
            cout << numero << endl;
        }

        else{

            while(numero / 10 != 0){

                aux = numero % 10;
                if(aux < minimo){
                    minimo = aux;
                }

                numero = numero / 10;
            }

            if(numero < minimo){
                minimo = numero;
            }
            cout << minimo << endl;
        }
    }
}