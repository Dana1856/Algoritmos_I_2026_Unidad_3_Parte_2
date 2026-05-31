#include <iostream>

using namespace std;

// ============================================================================
// 1. PROTOTIPOS DE FUNCIONES (Modularización)
// ============================================================================
void mostrarMenu();
double calcularPorcentajeIncremento(double salarioActual);
double calcularNuevoSalario(double salarioActual, double porcentaje);

// ============================================================================
// 2. FUNCIÓN PRINCIPAL
// ============================================================================
int main() {
    int opcion;
    double salarioActual, porcentaje, nuevoSalario;
    bool continuarPrograma = true; // Control booleano para el ciclo principal

    cout << "=== SISTEMA DE INCREMENTO SALARIAL INTERACTIVO ===" << endl;

    while (continuarPrograma) {
        mostrarMenu();
        cin >> opcion;

        // Estructura de selección múltiple para la interfaz de usuario
        switch (opcion) {
            case 1:
                cout << "\n--- Calcular Incremento del Trabajador ---" << endl;
                cout << "Ingrese el salario actual del trabajador: $";
                cin >> salarioActual;

                // Validación simple de entrada de datos
                if (salarioActual >= 0) {
                    // Invocación a los módulos de cálculo
                    porcentaje = calcularPorcentajeIncremento(salarioActual);
                    nuevoSalario = calcularNuevoSalario(salarioActual, porcentaje);

                    cout << "\nResultados del Procesamiento:" << endl;
                    cout << "-> Porcentaje de aumento aplicado: " << (porcentaje * 100) << "%" << endl;
                    cout << "-> Monto del incremento: $" << (salarioActual * porcentaje) << endl;
                    cout << "-> NUEVO SALARIO NETO: $" << nuevoSalario << endl;
                } else {
                    cout << "\n[ERROR] El salario no puede ser un valor negativo." << endl;
                }
                break;

            case 2:
                cout << "\nGracias por utilizar el sistema de actualización salarial. ¡Hasta luego!" << endl;
                continuarPrograma = false; // Evaluación booleana en false para romper el bucle
                break;

            default:
                cout << "\n[ERROR] Opcion no valida. Por favor, intente de nuevo." << endl;
                break;
        }

        cout << "\n--------------------------------------------------" << endl;
    }

    return 0;
}

// ============================================================================
// 3. DESARROLLO DE MÓDULOS (Funciones)
// ============================================================================

// Módulo encargado de renderizar las opciones del sistema en la terminal
void mostrarMenu() {
    cout << "Seleccione una opcion de la interfaz:" << endl;
    cout << "1 - Procesar incremento de un trabajador" << endl;
    cout << "2 - Salir del programa" << endl;
    cout << "Opcion: ";
}

// Módulo que implementa las reglas de negocio de la empresa (if - else if)
// Retorna el porcentaje en formato decimal (ej: 0.20 para 20%)
double calcularPorcentajeIncremento(double salarioActual) {
    double porcentaje;

    if (salarioActual <= 9000) {
        porcentaje = 0.20; // 20%
    } 
    else if (salarioActual <= 15000) {
        porcentaje = 0.10; // 10%
    } 
    else if (salarioActual <= 20000) {
        porcentaje = 0.05; // 5%
    } 
    else {
        porcentaje = 0.03; // 3%
    }

    return porcentaje;
}

// Módulo que calcula el salario final consolidado
double calcularNuevoSalario(double salarioActual, double porcentaje) {
    return salarioActual + (salarioActual * porcentaje);
}