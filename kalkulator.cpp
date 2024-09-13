#include <iostream>
using namespace std;

// Funkcje do wykonywania operacji arytmetycznych
double dodaj(double a, double b) {
    return a + b;
}

double odejmij(double a, double b) {
    return a - b;
}

double mnoz(double a, double b) {
    return a * b;
}

double dziel(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Blad: Dzielenie przez zero!" << endl;
        return 0;
    }
}
double potega(double a, int b){
    double wynik = a;
    for (int i = 0; i < b - 1; ++i) {
        wynik = wynik * a;
        //printf("a = %f\n", a);
    }
    return wynik;
}

int main() {
    double num1, num2;
    char operacja;
    cout << "Podaj pierwsza liczbe: ";
    cin >> num1;
    cout << "Podaj operacje (+, -, *, /, ^): ";
    cin >> operacja;
    cout << "Podaj druga liczbe: ";
    cin >> num2;

    double wynik;

    switch (operacja) {
        case '+':
            wynik = dodaj(num1, num2);
        break;
        case '-':
            wynik = odejmij(num1, num2);
        break;
        case '*':
            wynik = mnoz(num1, num2);
        break;
        case '/':
            wynik = dziel(num1, num2);
        break;
        case '^':
            wynik = potega(num1, num2);
        break;
        default:
            cout << "Nieprawidłowa operacja!" << endl;
        return 1;
    }

    cout << "Wynik: " << wynik << endl;
    return 0;
}
