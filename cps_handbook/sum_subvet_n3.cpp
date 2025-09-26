#include <bits/stdc++.h>
using namespace std;

int main(){ //solução de 0(n³) por conta dos 3 nested loops

    int n;
    cin >> n;
    vector<int> vet;

    for(int i = 0; i < n; i++){
        int valor;
        cin >> valor;
        vet.push_back(valor);
    }

    int maior = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int soma = 0;
            for(int k = i; k <= j; k++){
                soma = soma + vet[k];
            }

            if(soma > maior){
                maior = soma;
            }
        }
    }

    cout << maior << endl;
}