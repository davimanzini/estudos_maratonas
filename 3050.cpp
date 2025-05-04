#include <iostream>

using namespace std;

int main(){


    int predios;

    cin >> predios;

    int andares[predios];

    for(int i = 0; i < predios; i++){

        int andar;
        cin >> andar;
        andares[i] = andar;
    }

    int maior = 0;
    for(int j = 0; j < predios; j++){
        
        for(int k = 0; k < predios; k++){

            if(((k - j) + andares[j] + andares[k]) > maior)
                maior = (k - j) + andares[j] + andares[k];
        }
    }

    cout << maior << endl;

    return 0;
}