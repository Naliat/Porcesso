#include <iostream>

using namespace std;

int main() {
    // a) 1, 3, 5, 7, ___
    // Lógica: Sequência de números ímpares consecutivos
    int a_next = 9;

    // b) 2, 4, 8, 16, 32, 64, ____
    // Lógica: Cada número é o dobro do anterior
    int b_next = 128;

    // c) 0, 1, 4, 9, 16, 25, 36, ____
    // Lógica: Sequência de quadrados perfeitos (n^2)
    int c_next = 49;  // 7^2

    // d) 4, 16, 36, 64, ____
    // Lógica: Sequência de quadrados perfeitos dos números pares (2^2, 4^2, 6^2, 8^2, ...)
    int d_next = 100;  // 10^2

    // e) 1, 1, 2, 3, 5, 8, ____
    // Lógica: Sequência de Fibonacci
    int e_next = 13;

    // f) 2, 10, 12, 16, 17, 18, 19, ____
    // Lógica: Sequência de números começando com 2, depois todos os números que começam com 1
    int f_next = 20;

    // Exibe os resultados
    cout << "a) 1, 3, 5, 7, " << a_next << endl;
    cout << "b) 2, 4, 8, 16, 32, 64, " << b_next << endl;
    cout << "c) 0, 1, 4, 9, 16, 25, 36, " << c_next << endl;
    cout << "d) 4, 16, 36, 64, " << d_next << endl;
    cout << "e) 1, 1, 2, 3, 5, 8, " << e_next << endl;
    cout << "f) 2, 10, 12, 16, 17, 18, 19, " << f_next << endl;

    return 0;
}
