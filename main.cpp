#include <iostream>
#include "calculadora.h"

using namespace std;

// Programa principal de la calculadora cientifica
// Muestra un menu interactivo para el usuario
int main()
{
    cout << "==================================================" << endl;
    cout << "       CALCULADORA CIENTIFICA" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << "Constantes disponibles:" << endl;
    cout << "  PI = " << PI << endl;
    cout << "  E = " << E << endl;
    cout << endl;

    int opcion;
    double num1, num2;
    int exponente;

    do
    {
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1.  Suma" << endl;
        cout << "2.  Resta" << endl;
        cout << "3.  Multiplicacion" << endl;
        cout << "4.  Division" << endl;
        cout << "5.  Valor Absoluto" << endl;
        cout << "6.  Raiz Cuadrada" << endl;
        cout << "7.  Potencia" << endl;
        cout << "8.  Exponencial (e^x)" << endl;
        cout << "9.  Seno" << endl;
        cout << "10. Coseno" << endl;
        cout << "11. Tangente" << endl;
        cout << "12. Grados a Radianes" << endl;
        cout << "13. Radianes a Grados" << endl;
        cout << "14. Logaritmo Natural (ln)" << endl;
        cout << "15. Logaritmo Base 10" << endl;
        cout << "0.  Salir" << endl;
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << suma(num1, num2) << endl;
            break;

        case 2:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << resta(num1, num2) << endl;
            break;

        case 3:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << multiplicacion(num1, num2) << endl;
            break;

        case 4:
            cout << "Ingrese el dividendo: ";
            cin >> num1;
            cout << "Ingrese el divisor: ";
            cin >> num2;
            if (num2 == 0.0)
            {
                cout << "Error: Division por cero" << endl;
            }
            else
            {
                cout << "Resultado: " << division(num1, num2) << endl;
            }
            break;

        case 5:
            cout << "Ingrese el numero: ";
            cin >> num1;
            cout << "Resultado: " << valorAbsoluto(num1) << endl;
            break;

        case 6:
            cout << "Ingrese el numero: ";
            cin >> num1;
            if (num1 < 0)
            {
                cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo" << endl;
            }
            else
            {
                cout << "Resultado: " << raizCuadrada(num1) << endl;
            }
            break;

        case 7:
            cout << "Ingrese la base: ";
            cin >> num1;
            cout << "Ingrese el exponente (entero): ";
            cin >> exponente;
            cout << "Resultado: " << potencia(num1, exponente) << endl;
            break;

        case 8:
            cout << "Ingrese el exponente: ";
            cin >> num1;
            cout << "Resultado: " << exponencial(num1) << endl;
            break;

        case 9:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            cout << "Resultado: " << seno(num1) << endl;
            break;

        case 10:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            cout << "Resultado: " << coseno(num1) << endl;
            break;

        case 11:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            cout << "Resultado: " << tangente(num1) << endl;
            break;

        case 12:
            cout << "Ingrese el angulo en grados: ";
            cin >> num1;
            cout << "Resultado: " << gradosARadianes(num1) << " radianes" << endl;
            break;

        case 13:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            cout << "Resultado: " << radianesAGrados(num1) << " grados" << endl;
            break;

        case 14:
            cout << "Ingrese el numero: ";
            cin >> num1;
            if (num1 <= 0)
            {
                cout << "Error: El logaritmo solo se define para numeros positivos" << endl;
            }
            else
            {
                cout << "Resultado: " << logaritmoNatural(num1) << endl;
            }
            break;

        case 15:
            cout << "Ingrese el numero: ";
            cin >> num1;
            if (num1 <= 0)
            {
                cout << "Error: El logaritmo solo se define para numeros positivos" << endl;
            }
            else
            {
                cout << "Resultado: " << logaritmoBase10(num1) << endl;
            }
            break;

        case 0:
            cout << "Gracias por usar la Calculadora Cientifica!" << endl;
            break;

        default:
            cout << "Opcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 0);

    return 0;
}
