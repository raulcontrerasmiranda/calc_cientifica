#include <iostream>

using namespace std;

const double EPSILON = 0.001;
const double PI = 3.141592653589793;
const double E = 2.718281828459045;

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

// Calcula la potencia de un numero usando multiplicaciones sucesivas para exponentes enteros
// Parametros: base - numero base, exponente - exponente entero
// Retorna: base^exponente, o 0.0 si el exponente es negativo y la base es 0
double potencia(double base, int exponente)
{
    if (exponente == 0)
    {
        return 1.0;
    }

    if (exponente < 0)
    {
        if (base == 0.0)
        {
            return 0.0;
        }
        return division(1.0, potencia(base, multiplicacion(exponente, -1)));
    }

    double resultado = 1.0;
    for (int i = 0; i < exponente; i++)
    {
        resultado = multiplicacion(resultado, base);
    }
    return resultado;
}

// Reduce un angulo al rango [-PI, PI] para mejorar precision en calculos trigonometricos
// Parametro: x - angulo en radianes
// Retorna: angulo equivalente en el rango [-PI, PI]
double reducirAngulo(double x)
{
    while (x > PI)
    {
        x = resta(x, multiplicacion(2.0, PI));
    }
    while (x < multiplicacion(-1.0, PI))
    {
        x = suma(x, multiplicacion(2.0, PI));
    }
    return x;
}

// Calcula el seno de un angulo usando la serie de Taylor
// Parametro: x - angulo en radianes
// Retorna: el valor del seno de x
double seno(double x)
{
    x = reducirAngulo(x);

    double resultado = 0.0;
    double termino = x;
    int n = 1;
    const int MAX_TERMINOS = 20;

    for (int i = 0; i < MAX_TERMINOS; i++)
    {
        resultado = suma(resultado, termino);

        double xCuadrado = multiplicacion(x, x);
        termino = multiplicacion(termino, xCuadrado);

        double denominador1 = suma(multiplicacion(n, 2.0), 1.0);
        double denominador2 = multiplicacion(n, 2.0);
        double denominador = multiplicacion(denominador1, denominador2);
        termino = division(termino, denominador);
        termino = multiplicacion(termino, -1.0);
        n = suma(n, 1);

        if (valorAbsoluto(termino) < 0.0000000001)
        {
            break;
        }
    }

    return resultado;
}

// Calcula el coseno de un angulo usando la serie de Taylor
// Parametro: x - angulo en radianes
// Retorna: el valor del coseno de x
double coseno(double x)
{
    x = reducirAngulo(x);

    double resultado = 1.0;
    double termino = 1.0;
    int n = 1;
    const int MAX_TERMINOS = 20;

    for (int i = 0; i < MAX_TERMINOS; i++)
    {
        double xCuadrado = multiplicacion(x, x);
        termino = multiplicacion(termino, xCuadrado);
        termino = division(termino, multiplicacion(multiplicacion(n, 2.0), resta(multiplicacion(n, 2.0), 1.0)));
        termino = multiplicacion(termino, -1.0);

        resultado = suma(resultado, termino);
        n = suma(n, 1);

        if (valorAbsoluto(termino) < 0.0000000001)
        {
            break;
        }
    }

    return resultado;
}

// Calcula la tangente de un angulo usando seno/coseno
// Parametro: x - angulo en radianes
// Retorna: el valor de la tangente de x, o 0.0 si coseno(x) es cercano a cero
double tangente(double x)
{
    double cos_x = coseno(x);
    if (valorAbsoluto(cos_x) < 0.0001)
    {
        return 0.0;
    }
    return division(seno(x), cos_x);
}

// Convierte grados a radianes
// Parametro: grados - angulo en grados
// Retorna: angulo equivalente en radianes
double gradosARadianes(double grados)
{
    return multiplicacion(grados, division(PI, 180.0));
}

// Convierte radianes a grados
// Parametro: radianes - angulo en radianes
// Retorna: angulo equivalente en grados
double radianesAGrados(double radianes)
{
    return multiplicacion(radianes, division(180.0, PI));
}

// Calcula el logaritmo natural de un numero usando la serie de Taylor
// Parametro: x - numero positivo mayor que 0
// Retorna: ln(x), o 0.0 si x <= 0
double logaritmoNatural(double x)
{
    if (x <= 0.0)
    {
        return 0.0;
    }

    if (valorAbsoluto(resta(x, 1.0)) < 0.0001)
    {
        return 0.0;
    }

    // Para mejor convergencia, transformar x al rango (0.5, 2) usando ln(a*2^n) = ln(a) + n*ln(2)
    int exponente = 0;
    while (x >= 2.0)
    {
        x = division(x, 2.0);
        exponente = suma(exponente, 1);
    }
    while (x < 0.5)
    {
        x = multiplicacion(x, 2.0);
        exponente = resta(exponente, 1);
    }

    // Serie de Taylor para ln(x) alrededor de 1: ln(x) = (x-1) - (x-1)^2/2 + (x-1)^3/3 - ...
    double y = resta(x, 1.0);
    double resultado = 0.0;
    double termino = y;
    const int MAX_TERMINOS = 50;

    for (int n = 1; n <= MAX_TERMINOS; n++)
    {
        double terminoActual = division(termino, static_cast<double>(n));
        if (n % 2 == 0)
        {
            terminoActual = multiplicacion(terminoActual, -1.0);
        }

        resultado = suma(resultado, terminoActual);

        if (valorAbsoluto(terminoActual) < 0.0000000001)
        {
            break;
        }

        termino = multiplicacion(termino, y);
    }

    // Agregar n*ln(2) donde ln(2) ≈ 0.693147
    double ln2 = 0.693147180559945;
    resultado = suma(resultado, multiplicacion(static_cast<double>(exponente), ln2));

    return resultado;
}

// Calcula el logaritmo en base 10 de un numero
// Parametro: x - numero positivo mayor que 0
// Retorna: log10(x), usando la formula log10(x) = ln(x) / ln(10)
double logaritmoBase10(double x)
{
    return division(logaritmoNatural(x), logaritmoNatural(10.0));
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

// Ejecuta pruebas unitarias para la funcion potencia
// Verifica calculos de potencias con exponentes positivos, negativos y cero
// Imprime el resultado de las pruebas por consola
void testPotencia()
{
    cout << "Test Potencia iniciado..." << endl;

    if (!areEqual(potencia(2.0, 3), 8.0))
    {
        cout << "FALLA: 2^3 = 8" << endl;
        cout << "Obtenido: " << potencia(2.0, 3) << endl;
        return;
    }

    if (!areEqual(potencia(5.0, 0), 1.0))
    {
        cout << "FALLA: 5^0 = 1" << endl;
        cout << "Obtenido: " << potencia(5.0, 0) << endl;
        return;
    }

    if (!areEqual(potencia(2.0, -2), 0.25))
    {
        cout << "FALLA: 2^-2 = 0.25" << endl;
        cout << "Obtenido: " << potencia(2.0, -2) << endl;
        return;
    }

    if (!areEqual(potencia(10.0, 2), 100.0))
    {
        cout << "FALLA: 10^2 = 100" << endl;
        cout << "Obtenido: " << potencia(10.0, 2) << endl;
        return;
    }

    cout << "Test Potencia: PASA" << endl;
}

// Ejecuta pruebas unitarias para las funciones trigonometricas
// Verifica seno, coseno y tangente para angulos conocidos
// Imprime el resultado de las pruebas por consola
void testTrigonometricas()
{
    cout << "Test Funciones Trigonometricas iniciado..." << endl;

    // Test seno
    if (!areEqual(seno(0.0), 0.0))
    {
        cout << "FALLA: sen(0) = 0" << endl;
        cout << "Obtenido: " << seno(0.0) << endl;
        return;
    }

    if (!areEqual(seno(division(PI, 2.0)), 1.0))
    {
        cout << "FALLA: sen(PI/2) = 1" << endl;
        cout << "Obtenido: " << seno(division(PI, 2.0)) << endl;
        return;
    }

    if (!areEqual(seno(PI), 0.0))
    {
        cout << "FALLA: sen(PI) = 0" << endl;
        cout << "Obtenido: " << seno(PI) << endl;
        return;
    }

    // Test coseno
    if (!areEqual(coseno(0.0), 1.0))
    {
        cout << "FALLA: cos(0) = 1" << endl;
        cout << "Obtenido: " << coseno(0.0) << endl;
        return;
    }

    if (!areEqual(coseno(division(PI, 2.0)), 0.0))
    {
        cout << "FALLA: cos(PI/2) = 0" << endl;
        cout << "Obtenido: " << coseno(division(PI, 2.0)) << endl;
        return;
    }

    if (!areEqual(coseno(PI), -1.0))
    {
        cout << "FALLA: cos(PI) = -1" << endl;
        cout << "Obtenido: " << coseno(PI) << endl;
        return;
    }

    // Test tangente
    if (!areEqual(tangente(0.0), 0.0))
    {
        cout << "FALLA: tan(0) = 0" << endl;
        cout << "Obtenido: " << tangente(0.0) << endl;
        return;
    }

    if (!areEqual(tangente(division(PI, 4.0)), 1.0))
    {
        cout << "FALLA: tan(PI/4) = 1" << endl;
        cout << "Obtenido: " << tangente(division(PI, 4.0)) << endl;
        return;
    }

    cout << "Test Funciones Trigonometricas: PASA" << endl;
}

// Ejecuta pruebas unitarias para la conversion entre grados y radianes
// Verifica conversiones en ambas direcciones
// Imprime el resultado de las pruebas por consola
void testConversionAngulos()
{
    cout << "Test Conversion de Angulos iniciado..." << endl;

    if (!areEqual(gradosARadianes(180.0), PI))
    {
        cout << "FALLA: 180 grados = PI radianes" << endl;
        cout << "Obtenido: " << gradosARadianes(180.0) << endl;
        return;
    }

    if (!areEqual(gradosARadianes(90.0), division(PI, 2.0)))
    {
        cout << "FALLA: 90 grados = PI/2 radianes" << endl;
        cout << "Obtenido: " << gradosARadianes(90.0) << endl;
        return;
    }

    if (!areEqual(radianesAGrados(PI), 180.0))
    {
        cout << "FALLA: PI radianes = 180 grados" << endl;
        cout << "Obtenido: " << radianesAGrados(PI) << endl;
        return;
    }

    if (!areEqual(radianesAGrados(division(PI, 2.0)), 90.0))
    {
        cout << "FALLA: PI/2 radianes = 90 grados" << endl;
        cout << "Obtenido: " << radianesAGrados(division(PI, 2.0)) << endl;
        return;
    }

    cout << "Test Conversion de Angulos: PASA" << endl;
}

// Ejecuta pruebas unitarias para las funciones logaritmicas
// Verifica logaritmo natural y logaritmo base 10
// Imprime el resultado de las pruebas por consola
void testLogaritmos()
{
    cout << "Test Logaritmos iniciado..." << endl;

    if (!areEqual(logaritmoNatural(1.0), 0.0))
    {
        cout << "FALLA: ln(1) = 0" << endl;
        cout << "Obtenido: " << logaritmoNatural(1.0) << endl;
        return;
    }

    if (!areEqual(logaritmoNatural(E), 1.0))
    {
        cout << "FALLA: ln(e) = 1" << endl;
        cout << "Obtenido: " << logaritmoNatural(E) << endl;
        return;
    }

    if (!areEqual(logaritmoBase10(10.0), 1.0))
    {
        cout << "FALLA: log10(10) = 1" << endl;
        cout << "Obtenido: " << logaritmoBase10(10.0) << endl;
        return;
    }

    if (!areEqual(logaritmoBase10(100.0), 2.0))
    {
        cout << "FALLA: log10(100) = 2" << endl;
        cout << "Obtenido: " << logaritmoBase10(100.0) << endl;
        return;
    }

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