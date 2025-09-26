#include <bits/stdc++.h>
using namespace std;

int main(){

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
        int soma = 0;
        for(int j = i; j < n; j++){
            soma = soma + vet[j];
            maior = max(maior, soma);
        }
    }

    cout << maior << endl;
}