#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int vet[n];

    for(int i = 0; i < n; i++){

        int score;
        cin >> score;
        vet[i] = score;
    }

    int pos = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] > 0){
            pos = 1;
        }
    }

    if(pos == 0){
        cout << 0 << endl;
    }

    else{
        int kscore = vet[k - 1];

        int count = 0;
        for(int i = 0; i < n; i++){
            if(vet[i] >= kscore && vet[i] != 0){
                count ++;
            }
        }

        cout << count << endl;

    }

    return 0;
}