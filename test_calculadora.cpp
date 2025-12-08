#include <iostream>
#include "calculadora.h"

using namespace std;

// Ejecuta pruebas unitarias para la funcion suma
// Verifica casos positivos, negativos y cero
// Imprime el resultado de las pruebas por consola
void testSuma()
{
    cout << "\n=== Test Suma ===" << endl;

    cout << "  Probando: 2.0 + 3.0" << endl;
    double resultado1 = suma(2.0, 3.0);
    if (!areEqual(resultado1, 5.0))
    {
        cout << "  FALLA: Esperado 5.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 2.0 + 3.0 = " << resultado1 << endl;

    cout << "  Probando: -5.0 + 3.0" << endl;
    double resultado2 = suma(-5.0, 3.0);
    if (!areEqual(resultado2, -2.0))
    {
        cout << "  FALLA: Esperado -2.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: -5.0 + 3.0 = " << resultado2 << endl;

    cout << "  Probando: 0.0 + 0.0" << endl;
    double resultado3 = suma(0.0, 0.0);
    if (!areEqual(resultado3, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: 0.0 + 0.0 = " << resultado3 << endl;

    cout << "Test Suma: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion resta
// Verifica casos de resta positiva, negativa y cero
// Imprime el resultado de las pruebas por consola
void testResta()
{
    cout << "\n=== Test Resta ===" << endl;

    cout << "  Probando: 5.0 - 3.0" << endl;
    double resultado1 = resta(5.0, 3.0);
    if (!areEqual(resultado1, 2.0))
    {
        cout << "  FALLA: Esperado 2.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 5.0 - 3.0 = " << resultado1 << endl;

    cout << "  Probando: 3.0 - 5.0" << endl;
    double resultado2 = resta(3.0, 5.0);
    if (!areEqual(resultado2, -2.0))
    {
        cout << "  FALLA: Esperado -2.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: 3.0 - 5.0 = " << resultado2 << endl;

    cout << "  Probando: 0.0 - 0.0" << endl;
    double resultado3 = resta(0.0, 0.0);
    if (!areEqual(resultado3, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: 0.0 - 0.0 = " << resultado3 << endl;

    cout << "Test Resta: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion multiplicacion
// Verifica multiplicaciones con numeros positivos, negativos, cero y decimales
// Imprime el resultado de las pruebas por consola
void testMultiplicacion()
{
    cout << "\n=== Test Multiplicacion ===" << endl;

    cout << "  Probando: 2.0 * 3.0" << endl;
    double resultado1 = multiplicacion(2.0, 3.0);
    if (!areEqual(resultado1, 6.0))
    {
        cout << "  FALLA: Esperado 6.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 2.0 * 3.0 = " << resultado1 << endl;

    cout << "  Probando: -2.0 * 3.0" << endl;
    double resultado2 = multiplicacion(-2.0, 3.0);
    if (!areEqual(resultado2, -6.0))
    {
        cout << "  FALLA: Esperado -6.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: -2.0 * 3.0 = " << resultado2 << endl;

    cout << "  Probando: 0.0 * 5.0" << endl;
    double resultado3 = multiplicacion(0.0, 5.0);
    if (!areEqual(resultado3, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: 0.0 * 5.0 = " << resultado3 << endl;

    cout << "  Probando: 2.5 * 4.0" << endl;
    double resultado4 = multiplicacion(2.5, 4.0);
    if (!areEqual(resultado4, 10.0))
    {
        cout << "  FALLA: Esperado 10.0, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: 2.5 * 4.0 = " << resultado4 << endl;

    cout << "Test Multiplicacion: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion division
// Verifica divisiones exactas, con negativos y con decimales
// Imprime el resultado de las pruebas por consola
void testDivision()
{
    cout << "\n=== Test Division ===" << endl;

    cout << "  Probando: 6.0 / 3.0" << endl;
    double resultado1 = division(6.0, 3.0);
    if (!areEqual(resultado1, 2.0))
    {
        cout << "  FALLA: Esperado 2.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 6.0 / 3.0 = " << resultado1 << endl;

    cout << "  Probando: 10.0 / 2.0" << endl;
    double resultado2 = division(10.0, 2.0);
    if (!areEqual(resultado2, 5.0))
    {
        cout << "  FALLA: Esperado 5.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: 10.0 / 2.0 = " << resultado2 << endl;

    cout << "  Probando: -10.0 / 2.0" << endl;
    double resultado3 = division(-10.0, 2.0);
    if (!areEqual(resultado3, -5.0))
    {
        cout << "  FALLA: Esperado -5.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: -10.0 / 2.0 = " << resultado3 << endl;

    cout << "  Probando: 1.0 / 4.0" << endl;
    double resultado4 = division(1.0, 4.0);
    if (!areEqual(resultado4, 0.25))
    {
        cout << "  FALLA: Esperado 0.25, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: 1.0 / 4.0 = " << resultado4 << endl;

    cout << "Test Division: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion raizCuadrada
// Verifica el calculo de raices cuadradas de numeros enteros, decimales y casos especiales
// Imprime el resultado de las pruebas por consola
void testRaizCuadrada()
{
    cout << "\n=== Test Raiz Cuadrada ===" << endl;

    cout << "  Probando: sqrt(4.0)" << endl;
    double resultado1 = raizCuadrada(4.0);
    if (!areEqual(resultado1, 2.0))
    {
        cout << "  FALLA: Esperado 2.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: sqrt(4.0) = " << resultado1 << endl;

    cout << "  Probando: sqrt(9.0)" << endl;
    double resultado2 = raizCuadrada(9.0);
    if (!areEqual(resultado2, 3.0))
    {
        cout << "  FALLA: Esperado 3.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: sqrt(9.0) = " << resultado2 << endl;

    cout << "  Probando: sqrt(16.0)" << endl;
    double resultado3 = raizCuadrada(16.0);
    if (!areEqual(resultado3, 4.0))
    {
        cout << "  FALLA: Esperado 4.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: sqrt(16.0) = " << resultado3 << endl;

    cout << "  Probando: sqrt(2.0)" << endl;
    double resultado4 = raizCuadrada(2.0);
    if (!areEqual(resultado4, 1.414))
    {
        cout << "  FALLA: Esperado 1.414, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: sqrt(2.0) = " << resultado4 << endl;

    cout << "  Probando: sqrt(0.25)" << endl;
    double resultado5 = raizCuadrada(0.25);
    if (!areEqual(resultado5, 0.5))
    {
        cout << "  FALLA: Esperado 0.5, Obtenido " << resultado5 << endl;
        return;
    }
    cout << "  OK: sqrt(0.25) = " << resultado5 << endl;

    cout << "Test Raiz Cuadrada: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion exponencial
// Verifica el calculo de e^x para diferentes valores de x (positivos, negativos y cero)
// Imprime el resultado de las pruebas por consola
void testExponencial()
{
    cout << "\n=== Test Exponencial ===" << endl;

    cout << "  Probando: e^0" << endl;
    double resultado1 = exponencial(0.0);
    if (!areEqual(resultado1, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: e^0 = " << resultado1 << endl;

    cout << "  Probando: e^1" << endl;
    double resultado2 = exponencial(1.0);
    if (!areEqual(resultado2, 2.718))
    {
        cout << "  FALLA: Esperado 2.718, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: e^1 = " << resultado2 << endl;

    cout << "  Probando: e^2" << endl;
    double resultado3 = exponencial(2.0);
    if (!areEqual(resultado3, 7.389))
    {
        cout << "  FALLA: Esperado 7.389, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: e^2 = " << resultado3 << endl;

    cout << "  Probando: e^(-1)" << endl;
    double resultado4 = exponencial(-1.0);
    if (!areEqual(resultado4, 0.368))
    {
        cout << "  FALLA: Esperado 0.368, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: e^(-1) = " << resultado4 << endl;

    cout << "Test Exponencial: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion potencia
// Verifica calculos de potencias con exponentes positivos, negativos y cero
// Imprime el resultado de las pruebas por consola
void testPotencia()
{
    cout << "\n=== Test Potencia ===" << endl;

    cout << "  Probando: 2.0^3" << endl;
    double resultado1 = potencia(2.0, 3);
    if (!areEqual(resultado1, 8.0))
    {
        cout << "  FALLA: Esperado 8.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 2.0^3 = " << resultado1 << endl;

    cout << "  Probando: 5.0^0" << endl;
    double resultado2 = potencia(5.0, 0);
    if (!areEqual(resultado2, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: 5.0^0 = " << resultado2 << endl;

    cout << "  Probando: 2.0^(-2)" << endl;
    double resultado3 = potencia(2.0, -2);
    if (!areEqual(resultado3, 0.25))
    {
        cout << "  FALLA: Esperado 0.25, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: 2.0^(-2) = " << resultado3 << endl;

    cout << "  Probando: 10.0^2" << endl;
    double resultado4 = potencia(10.0, 2);
    if (!areEqual(resultado4, 100.0))
    {
        cout << "  FALLA: Esperado 100.0, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: 10.0^2 = " << resultado4 << endl;

    cout << "Test Potencia: PASA" << endl;
}

// Ejecuta pruebas unitarias para las funciones trigonometricas
// Verifica seno, coseno y tangente para angulos conocidos
// Imprime el resultado de las pruebas por consola
void testTrigonometricas()
{
    cout << "\n=== Test Funciones Trigonometricas ===" << endl;

    // Test seno
    cout << "  Probando: sen(0)" << endl;
    double resultado1 = seno(0.0);
    if (!areEqual(resultado1, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: sen(0) = " << resultado1 << endl;

    cout << "  Probando: sen(PI/2)" << endl;
    double resultado2 = seno(division(PI, 2.0));
    if (!areEqual(resultado2, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: sen(PI/2) = " << resultado2 << endl;

    cout << "  Probando: sen(PI)" << endl;
    double resultado3 = seno(PI);
    if (!areEqual(resultado3, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: sen(PI) = " << resultado3 << endl;

    // Test coseno
    cout << "  Probando: cos(0)" << endl;
    double resultado4 = coseno(0.0);
    if (!areEqual(resultado4, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: cos(0) = " << resultado4 << endl;

    cout << "  Probando: cos(PI/2)" << endl;
    double resultado5 = coseno(division(PI, 2.0));
    if (!areEqual(resultado5, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado5 << endl;
        return;
    }
    cout << "  OK: cos(PI/2) = " << resultado5 << endl;

    cout << "  Probando: cos(PI)" << endl;
    double resultado6 = coseno(PI);
    if (!areEqual(resultado6, -1.0))
    {
        cout << "  FALLA: Esperado -1.0, Obtenido " << resultado6 << endl;
        return;
    }
    cout << "  OK: cos(PI) = " << resultado6 << endl;

    // Test tangente
    cout << "  Probando: tan(0)" << endl;
    double resultado7 = tangente(0.0);
    if (!areEqual(resultado7, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado7 << endl;
        return;
    }
    cout << "  OK: tan(0) = " << resultado7 << endl;

    cout << "  Probando: tan(PI/4)" << endl;
    double resultado8 = tangente(division(PI, 4.0));
    if (!areEqual(resultado8, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado8 << endl;
        return;
    }
    cout << "  OK: tan(PI/4) = " << resultado8 << endl;

    cout << "Test Funciones Trigonometricas: PASA" << endl;
}

// Ejecuta pruebas unitarias para la conversion entre grados y radianes
// Verifica conversiones en ambas direcciones
// Imprime el resultado de las pruebas por consola
void testConversionAngulos()
{
    cout << "\n=== Test Conversion de Angulos ===" << endl;

    cout << "  Probando: 180 grados a radianes" << endl;
    double resultado1 = gradosARadianes(180.0);
    if (!areEqual(resultado1, PI))
    {
        cout << "  FALLA: Esperado " << PI << ", Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: 180 grados = " << resultado1 << " radianes" << endl;

    cout << "  Probando: 90 grados a radianes" << endl;
    double resultado2 = gradosARadianes(90.0);
    if (!areEqual(resultado2, division(PI, 2.0)))
    {
        cout << "  FALLA: Esperado " << division(PI, 2.0) << ", Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: 90 grados = " << resultado2 << " radianes" << endl;

    cout << "  Probando: PI radianes a grados" << endl;
    double resultado3 = radianesAGrados(PI);
    if (!areEqual(resultado3, 180.0))
    {
        cout << "  FALLA: Esperado 180.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: PI radianes = " << resultado3 << " grados" << endl;

    cout << "  Probando: PI/2 radianes a grados" << endl;
    double resultado4 = radianesAGrados(division(PI, 2.0));
    if (!areEqual(resultado4, 90.0))
    {
        cout << "  FALLA: Esperado 90.0, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: PI/2 radianes = " << resultado4 << " grados" << endl;

    cout << "Test Conversion de Angulos: PASA" << endl;
}

// Ejecuta pruebas unitarias para las funciones logaritmicas
// Verifica logaritmo natural y logaritmo base 10
// Imprime el resultado de las pruebas por consola
void testLogaritmos()
{
    cout << "\n=== Test Logaritmos ===" << endl;

    cout << "  Probando: ln(1)" << endl;
    double resultado1 = logaritmoNatural(1.0);
    if (!areEqual(resultado1, 0.0))
    {
        cout << "  FALLA: Esperado 0.0, Obtenido " << resultado1 << endl;
        return;
    }
    cout << "  OK: ln(1) = " << resultado1 << endl;

    cout << "  Probando: ln(e)" << endl;
    double resultado2 = logaritmoNatural(E);
    if (!areEqual(resultado2, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado2 << endl;
        return;
    }
    cout << "  OK: ln(e) = " << resultado2 << endl;

    cout << "  Probando: log10(10)" << endl;
    double resultado3 = logaritmoBase10(10.0);
    if (!areEqual(resultado3, 1.0))
    {
        cout << "  FALLA: Esperado 1.0, Obtenido " << resultado3 << endl;
        return;
    }
    cout << "  OK: log10(10) = " << resultado3 << endl;

    cout << "  Probando: log10(100)" << endl;
    double resultado4 = logaritmoBase10(100.0);
    if (!areEqual(resultado4, 2.0))
    {
        cout << "  FALLA: Esperado 2.0, Obtenido " << resultado4 << endl;
        return;
    }
    cout << "  OK: log10(100) = " << resultado4 << endl;

    cout << "Test Logaritmos: PASA" << endl;
}

// Funcion principal que ejecuta todas las pruebas unitarias de la calculadora
// Llama secuencialmente a cada funcion de test y muestra un resumen de resultados
// Retorna: 0 indicando ejecucion exitosa del programa
int main()
{
    cout << "Ejecutando pruebas de la Calculadora Cientifica..." << endl;
    cout << "=================================================" << endl;

    // Tests de funciones basicas
    testSuma();
    testResta();
    testMultiplicacion();
    testDivision();
    testRaizCuadrada();
    testExponencial();

    // Tests de funciones avanzadas
    testPotencia();
    testTrigonometricas();
    testConversionAngulos();
    testLogaritmos();

    cout << "=================================================" << endl;
    cout << "Todas las pruebas completadas!" << endl;
    return 0;
}
