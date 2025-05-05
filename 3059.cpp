#include <iostream>

using namespace std;

int main(){

    int qtd, min, max;
    cin >> qtd >> min >> max;
    int vetor[qtd];

    int x;
    for(int i = 0; i < qtd; i++){
        cin >> x;
        vetor[i] = x;
    }

    int count = 0;
    for(int j = 0; j < qtd; j++){
        for(int k = j + 1; k < qtd; k ++){

            if((vetor[j] + vetor[k] >= min) && (vetor[j] + vetor[k] <= max)){
                count ++;
            }
        }
    }

    cout << count << endl;

    return 0;
}