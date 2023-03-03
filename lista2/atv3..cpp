#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	cout << "N�meros primos menores ou iguais a: " << num << endl;

	for (int i = 2; i <= num; i++) {
        bool is_primo = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_primo = false;
                break;
            }
        }

        if (is_primo) {
            cout << i << endl;
        }
    }

    return 0;
}

