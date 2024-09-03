#include <iostream>

using namespace std;

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    // Exibe o valor final de SOMA
    cout << "SOMA é: " << SOMA << endl;

    return 0;
}
