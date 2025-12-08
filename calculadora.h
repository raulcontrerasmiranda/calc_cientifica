#ifndef CALCULADORA_H
#define CALCULADORA_H

// Constantes matematicas
extern const double EPSILON;
extern const double PI;
extern const double E;

// Funciones basicas
double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
double valorAbsoluto(double x);

// Funciones avanzadas
double raizCuadrada(double x);
double potencia(double base, int exponente);
double exponencial(double x);

// Funciones trigonometricas
double reducirAngulo(double x);
double seno(double x);
double coseno(double x);
double tangente(double x);

// Conversion de angulos
double gradosARadianes(double grados);
double radianesAGrados(double radianes);

// Funciones logaritmicas
double logaritmoNatural(double x);
double logaritmoBase10(double x);

// Utilidad para comparacion
bool areEqual(double a, double b);

#endif
