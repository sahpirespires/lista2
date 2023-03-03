#include <iostream>

using namespace std;

bool perfeito(int numPerf){
    int somaDiv = 0;
    for (int i = 1; i < numPerf; i++){
        if (numPerf % i == 0){
            somaDiv += i;
        }
    }
    return somaDiv == numPerf;
}

main(){
	setlocale(LC_ALL, "Portuguese");
    int numPerf;
    cout << "Digite um n�mero inteiro: ";
    cin >> numPerf;

    cout << "N�meros perfeitos menores ou iguais a " << numPerf << ": ";
    for (int x = 1; x <= numPerf; x++){
        if (perfeito(x)){
            cout << x << " ";
        }
    }
}
