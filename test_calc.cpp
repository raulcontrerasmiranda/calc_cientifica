#include <iostream>

using namespace std;

const double EPSILON = 0.001;

// Calcula la suma de dos numeros de punto flotante
// Parametros: a - primer sumando, b - segundo sumando
// Retorna: el resultado de a + b
double suma(double a, double b)
{
    return a + b;
}

// Calcula la resta de dos numeros de punto flotante
// Parametros: a - minuendo, b - sustraendo
// Retorna: el resultado de a - b
double resta(double a, double b)
{
    return a - b;
}

// Calcula el producto de dos numeros de punto flotante
// Parametros: a - primer factor, b - segundo factor
// Retorna: el resultado de a * b
double multiplicacion(double a, double b)
{
    return a * b;
}

// Calcula la division de dos numeros de punto flotante
// Parametros: a - dividendo, b - divisor
// Retorna: el resultado de a / b, o 0.0 si b es cero para evitar division por cero
double division(double a, double b)
{
    if (b == 0.0)
    {
        return 0.0;
    }
    return a / b;
}

// Calcula el valor absoluto de un numero
// Parametro: x - numero del cual se calculara el valor absoluto
// Retorna: |x|, siempre un valor no negativo
double valorAbsoluto(double x)
{
    if (x < 0)
    {
        return multiplicacion(x, -1.0);
    }
    return x;
}

// Calcula la raiz cuadrada de un numero usando el metodo de Newton-Raphson
// Parametro: x - numero del cual se calculara la raiz cuadrada
// Retorna: la raiz cuadrada de x, o 0.0 si x es negativo
// Utiliza iteraciones sucesivas hasta alcanzar una tolerancia de 0.000001
double raizCuadrada(double x)
{
    if (x < 0.0)
    {
        return 0.0;
    }

    if (x == 0.0)
    {
        return 0.0;
    }

    double aproximacion = x;
    double anterior;
    const double tolerancia = 0.000001;
    int iteraciones = 0;
    const int MAX_ITER = 100;

    do
    {
        anterior = aproximacion;
        double cociente = division(x, aproximacion);
        aproximacion = division(suma(aproximacion, cociente), 2.0);

        double diferencia = valorAbsoluto(resta(anterior, aproximacion));

        iteraciones = suma(iteraciones, 1);

        if (diferencia < tolerancia)
        {
            break;
        }

        if (iteraciones >= MAX_ITER)
        {
            break;
        }

    } while (true);

    return aproximacion;
}

// Calcula la funcion exponencial e^x usando la serie de Taylor
// Parametro: x - exponente
// Retorna: el valor de e^x calculado mediante la suma de terminos de la serie
// La serie se trunca cuando los terminos son menores a 0.0000000001 o despues de 50 terminos
double exponencial(double x)
{
    const int MAX_TERMINOS = 50;
    double resultado = 1.0;
    double termino = 1.0;

    for (int n = 1; n < MAX_TERMINOS; n++)
    {
        termino = multiplicacion(termino, x);
        termino = division(termino, static_cast<double>(n));
        resultado = suma(resultado, termino);

        double terminoAbs = valorAbsoluto(termino);

        if (terminoAbs < 0.0000000001)
        {
            break;
        }
    }

    return resultado;
}

// Compara dos numeros de punto flotante con una tolerancia epsilon
// Parametros: a - primer numero, b - segundo numero
// Retorna: true si la diferencia absoluta entre a y b es menor que EPSILON, false en caso contrario
bool areEqual(double a, double b)
{
    double diff = resta(a, b);
    if (diff < 0)
        diff = multiplicacion(diff, -1.0);
    return diff < EPSILON;
}

// Ejecuta pruebas unitarias para la funcion suma
// Verifica casos positivos, negativos y cero
// Imprime el resultado de las pruebas por consola
void testSuma()
{
    cout << "Test Suma iniciado..." << endl;

    if (!areEqual(suma(2.0, 3.0), 5.0))
    {
        cout << "FALLA: 2 + 3 = 5" << endl;
        return;
    }

    if (!areEqual(suma(-5.0, 3.0), -2.0))
    {
        cout << "FALLA: -5 + 3 = -2" << endl;
        return;
    }

    if (!areEqual(suma(0.0, 0.0), 0.0))
    {
        cout << "FALLA: 0 + 0 = 0" << endl;
        return;
    }

    cout << "Test Suma: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion resta
// Verifica casos de resta positiva, negativa y cero
// Imprime el resultado de las pruebas por consola
void testResta()
{
    cout << "Test Resta iniciado..." << endl;

    if (!areEqual(resta(5.0, 3.0), 2.0))
    {
        cout << "FALLA: 5 - 3 = 2" << endl;
        return;
    }

    if (!areEqual(resta(3.0, 5.0), -2.0))
    {
        cout << "FALLA: 3 - 5 = -2" << endl;
        return;
    }

    if (!areEqual(resta(0.0, 0.0), 0.0))
    {
        cout << "FALLA: 0 - 0 = 0" << endl;
        return;
    }

    cout << "Test Resta: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion multiplicacion
// Verifica multiplicaciones con numeros positivos, negativos, cero y decimales
// Imprime el resultado de las pruebas por consola
void testMultiplicacion()
{
    cout << "Test Multiplicacion iniciado..." << endl;

    if (!areEqual(multiplicacion(2.0, 3.0), 6.0))
    {
        cout << "FALLA: 2 * 3 = 6" << endl;
        return;
    }

    if (!areEqual(multiplicacion(-2.0, 3.0), -6.0))
    {
        cout << "FALLA: -2 * 3 = -6" << endl;
        return;
    }

    if (!areEqual(multiplicacion(0.0, 5.0), 0.0))
    {
        cout << "FALLA: 0 * 5 = 0" << endl;
        return;
    }

    if (!areEqual(multiplicacion(2.5, 4.0), 10.0))
    {
        cout << "FALLA: 2.5 * 4 = 10" << endl;
        return;
    }

    cout << "Test Multiplicacion: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion division
// Verifica divisiones exactas, con negativos y con decimales
// Imprime el resultado de las pruebas por consola
void testDivision()
{
    cout << "Test Division iniciado..." << endl;

    if (!areEqual(division(6.0, 3.0), 2.0))
    {
        cout << "FALLA: 6 / 3 = 2" << endl;
        return;
    }

    if (!areEqual(division(10.0, 2.0), 5.0))
    {
        cout << "FALLA: 10 / 2 = 5" << endl;
        return;
    }

    if (!areEqual(division(-10.0, 2.0), -5.0))
    {
        cout << "FALLA: -10 / 2 = -5" << endl;
        return;
    }

    if (!areEqual(division(1.0, 4.0), 0.25))
    {
        cout << "FALLA: 1 / 4 = 0.25" << endl;
        return;
    }

    cout << "Test Division: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion raizCuadrada
// Verifica el calculo de raices cuadradas de numeros enteros, decimales y casos especiales
// Imprime el resultado de las pruebas por consola
void testRaizCuadrada()
{
    cout << "Test Raiz Cuadrada iniciado..." << endl;

    if (!areEqual(raizCuadrada(4.0), 2.0))
    {
        cout << "FALLA: sqrt(4) = 2" << endl;
        cout << "Obtenido: " << raizCuadrada(4.0) << endl;
        return;
    }

    if (!areEqual(raizCuadrada(9.0), 3.0))
    {
        cout << "FALLA: sqrt(9) = 3" << endl;
        cout << "Obtenido: " << raizCuadrada(9.0) << endl;
        return;
    }

    if (!areEqual(raizCuadrada(16.0), 4.0))
    {
        cout << "FALLA: sqrt(16) = 4" << endl;
        cout << "Obtenido: " << raizCuadrada(16.0) << endl;
        return;
    }

    if (!areEqual(raizCuadrada(2.0), 1.414))
    {
        cout << "FALLA: sqrt(2) = 1.414" << endl;
        cout << "Obtenido: " << raizCuadrada(2.0) << endl;
        return;
    }

    if (!areEqual(raizCuadrada(0.25), 0.5))
    {
        cout << "FALLA: sqrt(0.25) = 0.5" << endl;
        cout << "Obtenido: " << raizCuadrada(0.25) << endl;
        return;
    }

    cout << "Test Raiz Cuadrada: PASA" << endl;
}

// Ejecuta pruebas unitarias para la funcion exponencial
// Verifica el calculo de e^x para diferentes valores de x (positivos, negativos y cero)
// Imprime el resultado de las pruebas por consola
void testExponencial()
{
    cout << "Test Exponencial iniciado..." << endl;

    if (!areEqual(exponencial(0.0), 1.0))
    {
        cout << "FALLA: e^0 = 1" << endl;
        cout << "Obtenido: " << exponencial(0.0) << endl;
        return;
    }

    if (!areEqual(exponencial(1.0), 2.718))
    {
        cout << "FALLA: e^1 = 2.718" << endl;
        cout << "Obtenido: " << exponencial(1.0) << endl;
        return;
    }

    if (!areEqual(exponencial(2.0), 7.389))
    {
        cout << "FALLA: e^2 = 7.389" << endl;
        cout << "Obtenido: " << exponencial(2.0) << endl;
        return;
    }

    if (!areEqual(exponencial(-1.0), 0.368))
    {
        cout << "FALLA: e^(-1) = 0.368" << endl;
        cout << "Obtenido: " << exponencial(-1.0) << endl;
        return;
    }

    cout << "Test Exponencial: PASA" << endl;
}

// Funcion principal que ejecuta todas las pruebas unitarias de la calculadora
// Llama secuencialmente a cada funcion de test y muestra un resumen de resultados
// Retorna: 0 indicando ejecucion exitosa del programa
int main()
{
    cout << "Ejecutando pruebas de la Calculadora Cientifica..." << endl;
    cout << "=================================================" << endl;
    testSuma();
    testResta();
    testMultiplicacion();
    testDivision();
    testRaizCuadrada();
    testExponencial();
    cout << "=================================================" << endl;
    cout << "Todas las pruebas completadas!" << endl;
    return 0;
}