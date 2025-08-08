#include <bits/stdc++.h>
using namespace std; //por causa disso nao precisa de std::

int main(){

    int n;
    cin >> n;

    string lixo;
    getline(cin, lixo); //estudar melhor isso aqui

    for(int i = 0; i < n; i++){

        string word;
        getline(cin, word);

        if(word.length() <= 10){
            cout << word << endl;
        }

        else{ //mais de 10 caracteres

           char first = word[0];
           char last  = word[word.length() - 1];
           int meio   = word.length() - 2;
           
           cout << first << meio << last << endl;
        }
    }

    return 0;
}