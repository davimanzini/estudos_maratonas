#include <bits/stdc++.h>
using namespace std;

int main(void){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int numero, minimo;
        cin >> numero;

        if(numero % 10 == numero){ //se tem um unico digito vai direto
            cout << numero << endl;
        }

        else{ //numeros aqui todos com pelo menos dois digitos
            
            minimo = numero % 10; //minimo começa com a unidade

            numero = numero / 10;

            if(numero % 10 == numero){
                if(numero < minimo){
                    cout << numero << endl;
                    break;
                }
            }

            while(numero % 10 != numero){
                if(numero % 10 < minimo){
                    minimo = numero % 10;
                }
                numero = numero / 10;
            }
        }
    }
}