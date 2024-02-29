#include <iostream>
using namespace std;


bool check_val(const float m, const float a){
    return (m>0 && a >0);
}

float calcIMC(const float m, const float a){
    if (check_val(m,a)) return m/(a*a);
    else return -1;
} 

void classificar_IMC(const float imc){
    if (imc < 17) cout << "Muito abaixo do peso";
    else if (imc < 18.5) cout << "Abaixo do peso";
    else if (imc < 25) cout << "Peso normal";
    else if (imc < 30) cout << "Acima do peso";
    else if (imc < 35) cout << "Obesidade";
    else if (imc < 40) cout << "Obesidade severa";
    else cout << "Obesidade mórbida";
}

int main(){
    float m, a;
    cout << "Digite o peso (em kg): ";
    cin >> m;
    cout << "Digite a altura (em metros): ";
    cin >> a;
    float res = calcIMC(m, a);
    cout << "IMC: " << calcIMC(m,a) << "\n" << endl;
    classificar_IMC(res);

return 0;
}