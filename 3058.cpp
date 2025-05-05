#include <iostream>
#include <iomanip> //para truncar

using namespace std;

int main(){

    int mercados;

    cin >> mercados;

    double preco;
    int qtd;
    cin >> preco >> qtd;

    double menor = (1000.0 / qtd) * preco;

    for(int i = 1; i < mercados; i++){
        cin >> preco >> qtd;
        if((1000.0 / qtd) * preco < menor)
            menor = (1000.0 / qtd) * preco;
    }

    cout << fixed << setprecision(2) << menor << endl;

    return 0;
}