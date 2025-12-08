# Calculadora Científica con TDD

Calculadora científica desarrollada en C++ usando Test-Driven Development (TDD)

## Descripción

Este proyecto implementa una calculadora científica completa sin utilizar librerías matemáticas externas. Todas las operaciones complejas están implementadas usando únicamente operaciones básicas (suma, resta, multiplicación, división).

## Funcionalidades

- **Suma y resta** de números reales
- **Multiplicación y división** de números reales
- **Raíz cuadrada** usando el método de Newton-Raphson
- **Función exponencial e^x** usando serie de Taylor

## Precisión

Todas las operaciones tienen una precisión superior a 10^-3 como se requiere en la especificación.

## Metodología TDD

Este proyecto fue desarrollado siguiendo estrictamente la metodología Test-Driven Development:

1. **Red:** Escribir tests que fallan
2. **Green:** Implementar el código mínimo para pasar los tests
3. **Refactor:** Mejorar el código manteniendo los tests en verde

El historial de commits refleja este proceso incremental.

## Compilación

### Compilar tests
```bash
g++ -o test_calc test_calc.cpp -std=c++11
```

### Compilar programa principal
```bash
g++ -o calc calc.cpp -std=c++11
```

## Ejecución

### Ejecutar tests
```bash
./test_calc
```

### Ejecutar calculadora
```bash
./calc
```

## Estructura del Proyecto
```
.
├── README.md              # Este archivo
├── test_calculator.cpp    # Tests y funciones de la calculadora
├── calculator.cpp         # Programa principal
└── .gitignore            # Archivos ignorados por Git
```

## Tecnologías

- C++11
- Sin librerías matemáticas externas
- Implementación propia de algoritmos numéricos

## Algoritmos Implementados

### Raíz Cuadrada - Método de Newton-Raphson

Fórmula iterativa: `x_n+1 = (x_n + a/x_n) / 2`

Converge rápidamente a la raíz cuadrada de `a`.

### Exponencial - Serie de Taylor

Fórmula: `e^x = 1 + x + x²/2! + x³/3! + ...`

Se calculan hasta 50 términos o hasta alcanzar la precisión deseada.

## Autor

Raul Contreras

## Licencia

Este proyecto es parte de una actividad académica.