#include <iostream>

bool isFibonacci(int number) {
    if (number == 0 || number == 1) return true;

    int a = 0, b = 1, c = a + b;

    while (c <= number) {
        if (c == number) return true;
        a = b;
        b = c;
        c = a + b;
    }

    return false;
}

int main() {
    int num;

    
    std::cout << "Informe um número: ";
    std::cin >> num;

     
    if (isFibonacci(num)) {
        std::cout << "O número " << num << " pertence à sequência de Fibonacci." << std::endl;
    } else {
        std::cout << "O número " << num << " não pertence à sequência de Fibonacci." << std::endl;
    }

    return 0;
}
