#include <iostream>

using namespace std;

// ============================================================================
// 1. PROTOTIPOS DE FUNCIONES (Modularización)
// ============================================================================
void mostrarMenu();
double convertirCentimetrosAPulgadas(double centimetros);
double convertirCelsiusAFahrenheit(double celsius);
double convertirLibrasAKilogramos(double libras);

// ============================================================================
// 2. FUNCIÓN PRINCIPAL
// ============================================================================
int main() {
    int opcion;
    double valorIngresado, valorConvertido;
    bool continuarPrograma = true; // Control booleano para el ciclo while

    cout << "=== CONVERSOR MULTI-UNIDAD CON SWITCH ===" << endl;

    while (continuarPrograma) {
        mostrarMenu();
        cin >> opcion;

        // Estructura de selección múltiple eficiente
        switch (opcion) {
            case 1:
                cout << "\n[Centimetros -> Pulgadas]" << endl;
                cout << "Ingrese la cantidad en centimetros: ";
                cin >> valorIngresado;
                
                valorConvertido = convertirCentimetrosAPulgadas(valorIngresado);
                cout << valorIngresado << " cm equivalen a: " << valorConvertido << " pulgadas." << endl;
                break; // Rompe el switch para volver a evaluar la condición del while

            case 2:
                cout << "\n[Celsius -> Fahrenheit]" << endl;
                cout << "Ingrese la temperatura en grados Celsius: ";
                cin >> valorIngresado;
                
                valorConvertido = convertirCelsiusAFahrenheit(valorIngresado);
                cout << valorIngresado << " \u00B0C equivalen a: " << valorConvertido << " \u00B0F." << endl;
                break;

            case 3:
                cout << "\n[Libras -> Kilogramos]" << endl;
                cout << "Ingrese el peso en libras: ";
                cin >> valorIngresado;
                
                valorConvertido = convertirLibrasAKilogramos(valorIngresado);
                cout << valorIngresado << " lb equivalen a: " << valorConvertido << " kg." << endl;
                break;

            case 4:
                cout << "\nGracias por utilizar el conversor. ¡Hasta luego!" << endl;
                continuarPrograma = false; // Bandera booleana en false para romper el bucle while
                break;

            default:
                // El bloque default actúa como resguardo frente a cualquier opción no contemplada
                cout << "\n[ERROR] Opcion no valida. Por favor, intente de nuevo." << endl;
                break;
        }
        
        cout << "\n------------------------------------------------" << endl;
    }

    return 0;
}

// ============================================================================
// 3. DESARROLLO DE MÓDULOS (Funciones)
// ============================================================================

void mostrarMenu() {
    cout << "Seleccione la conversion que desea realizar:" << endl;
    cout << "1 - Centimetros a Pulgadas" << endl;
    cout << "2 - Celsius a Fahrenheit" << endl;
    cout << "3 - Libras a Kilogramos" << endl;
    cout << "4 - Salir del programa" << endl;
    cout << "Opción: ";
}

double convertirCentimetrosAPulgadas(double centimetros) {
    return centimetros / 2.54;
}

double convertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

double convertirLibrasAKilogramos(double libras) {
    return libras * 0.453592;
}