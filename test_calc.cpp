#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0.0) {
        return 0.0;
    }
    return a / b;
}

bool areEqual(double a, double b) {
    double diff = resta(a, b);
    if (diff < 0) diff = multiplicacion(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() {
    cout << "Test Suma iniciado..." << endl;
    
    if (!areEqual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
    }
    
    if (!areEqual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
    }
    
    if (!areEqual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
    }
    
    cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta iniciado..." << endl;
    
    if (!areEqual(resta(5.0, 3.0), 2.0)) {
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
    }
    
    if (!areEqual(resta(3.0, 5.0), -2.0)) {
        cout << "FALLA: 3 - 5 = -2" << endl;
        return;
    }
    
    if (!areEqual(resta(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 - 0 = 0" << endl;
        return;
    }
    
    cout << "Test Resta: PASA" << endl;
}

void testMultiplicacion() {
    cout << "Test Multiplicacion iniciado..." << endl;
    
    if (!areEqual(multiplicacion(2.0, 3.0), 6.0)) {
        cout << "FALLA: 2 * 3 = 6" << endl;
        return;
    }
    
    if (!areEqual(multiplicacion(-2.0, 3.0), -6.0)) {
        cout << "FALLA: -2 * 3 = -6" << endl;
        return;
    }
    
    if (!areEqual(multiplicacion(0.0, 5.0), 0.0)) {
        cout << "FALLA: 0 * 5 = 0" << endl;
        return;
    }
    
    if (!areEqual(multiplicacion(2.5, 4.0), 10.0)) {
        cout << "FALLA: 2.5 * 4 = 10" << endl;
        return;
    }
    
    cout << "Test Multiplicacion: PASA" << endl;
}

void testDivision() {
    cout << "Test Division iniciado..." << endl;
    
    if (!areEqual(division(6.0, 3.0), 2.0)) {
        cout << "FALLA: 6 / 3 = 2" << endl;
        return;
    }
    
    if (!areEqual(division(10.0, 2.0), 5.0)) {
        cout << "FALLA: 10 / 2 = 5" << endl;
        return;
    }
    
    if (!areEqual(division(-10.0, 2.0), -5.0)) {
        cout << "FALLA: -10 / 2 = -5" << endl;
        return;
    }
    
    if (!areEqual(division(1.0, 4.0), 0.25)) {
        cout << "FALLA: 1 / 4 = 0.25" << endl;
        return;
    }
    
    cout << "Test Division: PASA" << endl;
}

int main() {
    cout << "Ejecutando pruebas de la Calculadora Cientifica..." << endl;
    cout << "=================================================" << endl;
    testSuma();
    testResta();
    testMultiplicacion();
    testDivision();
    return 0;
}
