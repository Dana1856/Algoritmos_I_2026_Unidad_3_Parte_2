#include <iostream>

using namespace std;

// ============================================================================
// 1. PROTOTIPOS DE FUNCIONES (Modularización)
// ============================================================================
void mostrarMenu();
int calcularDiferencia(int x, int y);
void mostrarComprendidos(int menor, int mayor);

// ============================================================================
// 2. FUNCIÓN PRINCIPAL
// ============================================================================
int main() {
    // ÁMBITO (SCOPE) GENERAL DEL MAIN: Estas variables son visibles en todo el main
    int opcion;
    int x, y;
    bool continuar = true; // Variable booleana para el control del bucle

    cout << "=== ANALIZADOR DE RANGOS NUMERICOS ===" << endl;

    // Uso del operador while (Ámbito del bucle)
    while (continuar) {
        mostrarMenu();
        cin >> opcion;

        // Uso del operador switch
        switch (opcion) {
            case 1: { 
                // APERTURA DE ÁMBITO LOCAL: Usamos las llaves { } dentro del case 1 
                // para que C++ nos permita aislar variables locales de este bloque.
                
                cout << "\nIngrese el primer numero (X): ";
                cin >> x;
                cout << "Ingrese el segundo numero (Y): ";
                cin >> y;

                int diferencia = calcularDiferencia(x, y); // Variable visible solo en este case
                cout << "\n-> La diferencia (X - Y) es: " << diferencia << endl;

                // Evaluación condicional mediante operadores if / if-else
                if (diferencia <= 10) {
                    cout << "-> Como la diferencia es <= 10, los numeros comprendidos son: " << endl;
                    
                    // Identificamos el menor y el mayor para poder listar el rango correctamente
                    if (x > y) {
                        mostrarComprendidos(y, x);
                    } else {
                        mostrarComprendidos(x, y);
                    }
                } else {
                    cout << "-> La diferencia es mayor a 10. No se listan los numeros." << endl;
                }
                break; 
                // CIERRE DE ÁMBITO LOCAL del case 1. La variable 'diferencia' deja de existir.
            }

            case 2:
                cout << "\nGracias por utilizar el programa. ¡Hasta luego!" << endl;
                continuar = false; // Evaluación booleana para romper el ciclo while
                break;

            default:
                cout << "\n[ERROR] Opcion no valida. Intente de nuevo." << endl;
                break;
        }
        cout << "\n--------------------------------------------------" << endl;
    }

    return 0;
}

// ============================================================================
// 3. DESARROLLO DE MÓDULOS (Funciones)
// ============================================================================

void mostrarMenu() {
    cout << "Seleccione una opcion:" << endl;
    cout << "1 - Leer numeros (X, Y) y procesar rango" << endl;
    cout << "2 - Salir del programa" << endl;
    cout << "Opcion: ";
}

// Módulo que calcula la diferencia estricta de X - Y
int calcularDiferencia(int x, int y) {
    return x - y;
}

// Módulo encargado de iterar y mostrar los números dentro del rango
void mostrarComprendidos(int menor, int mayor) {
    // ÁMBITO DE LA FUNCIÓN: La variable 'actual' solo es visible dentro de este bloque
    int actual = menor; 
    
    cout << "[ ";
    while (actual <= mayor) {
        cout << actual << " ";
        actual++; // Operador de incremento secuencial
    }
    cout << "]" << endl;
}