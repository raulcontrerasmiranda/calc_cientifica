#include "calculadora.h"

// Constantes matematicas
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
