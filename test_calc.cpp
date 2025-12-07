#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;



cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;




cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;



cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;






cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;



cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;




cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;



cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;


cat > test_calc.cpp << 'EOF'
#include <iostream>

using namespace std;

const double EPSILON = 0.001;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

bool sonIgual(double a, double b) {
    double diff = resta(a,b);
    if (diff < 0) diff = multiplicar(diff, -1.0);
    return diff < EPSILON;
}

void testSuma() { 
    cout << "Test Suma iniciando..." << endl;

    if (!sonIgual(suma(2.0, 3.0), 5.0)) {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
     }

    if (!sonIgual(suma(-5.0, 3.0), -2.0)) {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
     }
    
    if (!sonIgual(suma(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
     }

     cout << "Test Suma: PASA" << endl;
}

void testResta() {
    cout << "Test Resta Iniciando..." << endl;
    if (!sonIgual(resta(5.0, 3.0), 2.0)){
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

     if (!sonIgual(resta(3.0, 5.0), -2.0)) {
         cout << "FALLA: 3 - 5 = 2" << endl;
         return;
     }

     if (!sonIgual(resta(0.0, 0.0), 0.0)) {
         cout << "FALLA: 0 - 0 = 0" << endl;
         return;




void testResta() { 
    cout << "Test Resta iniciando..." << endl;

    if (!sonIgual(resta(5.0, 3.0), 2.0)) {
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
     }

    if (!sonIgual(resta(3.0, 5.0), -2.0)) {
        cout << "FALLA: 3 - 5 = -2" << endl;
        return;
     }

    if (!sonIgual(resta(0.0, 0.0), 0.0)) {
        cout << "FALLA: 0 - 0 = 0" << endl;

        return;
     }

     cout << "Test Resta: PASA" << endl;
}

void testMultiplicar() {
     cout << "Test Multiplicacion iniciando..." << endl;

     if(!sonIgual(multiplicar(2.0, 3.0), 6.0)) {
         cout << "FALLA: 2 * 3 = 6" << endl;
         return;
      }

     if(!sonIgual(multiplicar(-2.0, 3.0), -6.0)) {
         cout << "FALLA: -2 * 3 = -6" << endl;
         return;
     }

     if(!sonIgual(multiplicar(0.0, 5.0), 0.0)) {
         cout << "FALLA: 0 * 5 = 0" << endl;
         return;
     }

     if(!sonIgual(multiplicar(2.5, 4.0), 10.0)) {
         cout << "FALLA: 2.5 * 4 = 10" << endl;
         return;

      }
     
     cout << "Test Multiplicacion: PASA" << endl;
}

int main(){
    cout << "Ejecutando pruebas de la calculadora cientifica..." << endl;
    testSuma();
    testResta();
    testMultiplicar();
    return 0;
}
