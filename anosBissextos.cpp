#include <iostream>
using namespace std;

bool ehAnoBissexto(const int ano) {
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int main() {
    int ano;

    cout << "Digite um ano: ";
    cin >> ano;

    if (ehAnoBissexto(ano)) {
        cout << ano << " é um ano bissexto." << endl;
    } else {
        cout << ano << " não é um ano bissexto." << endl;
    }
    return 0;
}
