# Calculadora Científica con TDD

Calculadora científica desarrollada en C++ usando Test-Driven Development (TDD)

## Descripción

Este proyecto implementa una calculadora científica completa sin utilizar librerías matemáticas externas. Todas las operaciones complejas están implementadas usando únicamente operaciones básicas (suma, resta, multiplicación, división) y algoritmos numéricos como series de Taylor y el método de Newton-Raphson.

## Funcionalidades

### Operaciones Básicas

- **Suma y resta** de números reales
- **Multiplicación y división** de números reales
- **Valor absoluto**
- **Potencias** con exponentes enteros

### Operaciones Avanzadas

- **Raíz cuadrada** usando el método de Newton-Raphson
- **Función exponencial e^x** usando serie de Taylor
- **Logaritmo natural ln(x)** usando serie de Taylor
- **Logaritmo base 10 log₁₀(x)**

### Funciones Trigonométricas

- **Seno, coseno y tangente** usando series de Taylor
- **Conversión** entre grados y radianes

### Constantes Matemáticas

- **PI** = 3.141592653589793
- **E** = 2.718281828459045

## Precisión

Todas las operaciones tienen una precisión superior a 10^-3 como se requiere en la especificación.

## Metodología TDD

Este proyecto fue desarrollado siguiendo estrictamente la metodología Test-Driven Development:

1. **Red:** Escribir tests que fallan
2. **Green:** Implementar el código mínimo para pasar los tests
3. **Refactor:** Mejorar el código manteniendo los tests en verde

El historial de commits refleja este proceso incremental.

## Estructura del Proyecto

El proyecto está organizado de forma modular para facilitar el mantenimiento y la reutilización del código:

```
.
├── README.md              # Este archivo
├── calculadora.h          # Archivo de cabecera con declaraciones
├── calculadora.cpp        # Implementación de todas las funciones matemáticas
├── test_calculadora.cpp   # Suite de pruebas unitarias
├── main.cpp              # Programa principal con menú interactivo
├── test_calc.cpp         # Archivo original (legacy)
└── .gitignore            # Archivos ignorados por Git
```

## Compilación

El proyecto se puede compilar de dos formas diferentes:

### Opción 1: Compilar y ejecutar tests

```bash
g++ -std=c++11 calculadora.cpp test_calculadora.cpp -o test_calculadora
./test_calculadora
```

### Opción 2: Compilar y ejecutar programa interactivo

```bash
g++ -std=c++11 calculadora.cpp main.cpp -o calculadora
./calculadora
```

## Uso

### Ejecutar Tests

Los tests verifican automáticamente todas las funciones implementadas:

```bash
./test_calculadora
```

Salida esperada:

```
Ejecutando pruebas de la Calculadora Cientifica...
=================================================
Test Suma iniciado...
Test Suma: PASA
Test Resta iniciado...
Test Resta: PASA
...
Test Logaritmos: PASA
=================================================
Todas las pruebas completadas!
```

### Usar la Calculadora Interactiva

El programa principal presenta un menú con todas las operaciones disponibles:

```bash
./calculadora
```

Ejemplo de uso:

```
==================================================
       CALCULADORA CIENTIFICA
==================================================

Constantes disponibles:
  PI = 3.14159
  E = 2.71828

=== MENU PRINCIPAL ===
1.  Suma
2.  Resta
3.  Multiplicacion
4.  Division
5.  Valor Absoluto
6.  Raiz Cuadrada
7.  Potencia
8.  Exponencial (e^x)
9.  Seno
10. Coseno
11. Tangente
12. Grados a Radianes
13. Radianes a Grados
14. Logaritmo Natural (ln)
15. Logaritmo Base 10
0.  Salir

Seleccione una opcion:
```

## Tecnologías

- C++11
- Sin librerías matemáticas externas
- Implementación propia de algoritmos numéricos

## Algoritmos Implementados

### Raíz Cuadrada - Método de Newton-Raphson

Fórmula iterativa: `x_n+1 = (x_n + a/x_n) / 2`

Converge rápidamente a la raíz cuadrada de `a` con una tolerancia de 10^-6.

### Exponencial - Serie de Taylor

Fórmula: `e^x = 1 + x + x²/2! + x³/3! + ...`

Se calculan hasta 50 términos o hasta alcanzar la precisión deseada (10^-10).

### Funciones Trigonométricas - Series de Taylor

**Seno:** `sen(x) = x - x³/3! + x⁵/5! - x⁷/7! + ...`

**Coseno:** `cos(x) = 1 - x²/2! + x⁴/4! - x⁶/6! + ...`

Ambas funciones normalizan el ángulo al rango [-π, π] para mejorar la precisión.

### Logaritmo Natural - Serie de Taylor

Usando la transformación `ln(x) = ln(a×2ⁿ) + n×ln(2)` para mejorar convergencia.

Fórmula: `ln(1+y) = y - y²/2 + y³/3 - y⁴/4 + ...`

## Características Técnicas

- **Sin librerías externas:** Todo implementado desde cero
- **Precisión configurable:** EPSILON = 0.001 para comparaciones
- **Manejo de errores:** Validación de entradas (división por cero, raíces negativas, logaritmos de números no positivos)
- **Código modular:** Separación entre lógica, tests y programa principal
- **Bien documentado:** Cada función incluye comentarios explicativos

## Autor

Raul Contreras

## Licencia

Este proyecto es parte de una actividad académica.
