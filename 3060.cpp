#include <iostream>

using namespace std;

int main(){

    int valor, parcelas;

    cin >> valor >> parcelas;

    if(valor % parcelas == 0){
        
        int val_par = valor / parcelas;

        for(int i = 0; i < parcelas; i++){
            cout << val_par << endl;
        }
    }

    else{

        int resto = valor % parcelas;

        for(int i = 0; i < resto; i++){
            cout << valor / parcelas + 1 << endl;
        }

        for(int j = 0; j < (parcelas - resto); j++){
            cout << valor / parcelas << endl;
        }
    }

    return 0;
}