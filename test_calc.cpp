#include <iostream>
using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

bool sonIgual(double a, double b) {
    double diff = a - b;
    if (diff < 0) diff = -diff;
    return diff < EPSILON;
}

void testSuma() {
    cout << "Test Suma iniciando..." << endl;
    
    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLO: 2 + 3 = 5" << endl;
        return;
    }
    
    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLO: -5 + 3 = -2" << endl;
        return;
    }

    cout << "Test Suma: PASA" << endl;
}

int main() {
    cout << "Ejecutando pruebas de la calculadora..." << endl;
    testSuma();
    return 0;
}
