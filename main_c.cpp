#include <iostream>
#include "tipos.hpp"
#include "interfaz.hpp"
#include "salida.hpp"

using namespace std;

int main() {
    int opcionMenu;
    bool ejecutarPrograma = true; // Variable booleana para el control del bucle

    // El ámbito (scope) de estas variables es local al main, pero persistente en los ciclos
    tProducto productoPedido;
    tEnvio envioPedido;

    while (ejecutarPrograma) {
        mostrarMenuPrincipal();
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1: {
                // ÁMBITO LOCAL DEL CASE: Encapsulamos con llaves { } para aislar 
                // el bloque de instrucciones de carga y ejecución de subprogramas.
                
                cargarPedido(productoPedido, envioPedido);
                mostrarResumenComanda(productoPedido, envioPedido);
                break;
            }

            case 2:
                cout << "\nSaliendo de la aplicacion... ¡Muchas gracias!" << endl;
                ejecutarPrograma = false; // Evaluación booleana para romper el while
                break;

            default:
                cout << "\n[ERROR] Opcion no valida en el sistema. Intente nuevamente." << endl;
                break;
        }

        cout << "\n--------------------------------------------------" << endl;
    }

    return 0;
}