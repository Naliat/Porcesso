#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int count = 0;

 
    cout << "Informe uma string: ";
    getline(cin, input);

     
    for (char c : input) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }

 
    if (count > 0) {
        cout << "A letra 'a' (maiúscula ou minúscula) ocorre " << count << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' (maiúscula ou minúscula) não foi encontrada na string." << endl;
    }

    return 0;
}
