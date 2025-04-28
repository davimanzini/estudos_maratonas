#include <iostream>

using namespace std;

int main(){

    int monica, f3;
    int idades[3];

    cin >> monica;

    for(int i = 0; i < 2; i++){
        int filha;
        cin >> filha;
        idades[i] = filha;
    }

    f3 = monica - idades[0] - idades[1];

    int maior = f3;

    for(int i = 0; i < 2; i++){
        if (idades[i] > maior)
            maior = idades[i];
    }

    cout << maior << endl;

    return 0;
}