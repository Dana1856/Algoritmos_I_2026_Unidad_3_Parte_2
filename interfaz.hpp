#ifndef INTERFAZ_HPP
#define INTERFAZ_HPP

#include <iostream>
#include "Tipos.hpp"

using namespace std;

// Renderiza las opciones del sistema principal
void mostrarMenuPrincipal() {
    cout << "=== SISTEMA DE TOMA DE PEDIDOS ===" << endl;
    cout << "1 - Registrar nuevo pedido" << endl;
    cout << "2 - Salir de la aplicacion" << endl;
    cout << "Opcion: ";
}

// Módulo de carga: captura los datos individuales pasados por referencia
void cargarPedido(tProducto &productoSeleccionado, tEnvio &envioSeleccionado) {
    char opProducto;
    int opEnvio;

    // Menú de Productos
    cout << "\n--- Catalogo de Productos ---" << endl;
    cout << "a) Simple" << endl;
    cout << "b) Medio" << endl;
    cout << "c) Calidad" << endl;
    cout << "d) Premium" << endl;
    cout << "Seleccione una letra de producto: ";
    cin >> opProducto;

    // Estructura condicional para validar y castear el producto
    if (opProducto == 'a' || opProducto == 'A') { productoSeleccionado = simple; }
    else if (opProducto == 'b' || opProducto == 'B') { productoSeleccionado = medio; }
    else if (opProducto == 'c' || opProducto == 'C') { productoSeleccionado = calidad; }
    else if (opProducto == 'd' || opProducto == 'D') { productoSeleccionado = premium; }
    else { productoSeleccionado = producto_no_valido; }

    // Menú de Envíos
    cout << "\n--- Opciones de Envio ---" << endl;
    cout << "1) Normal" << endl;
    cout << "2) Express" << endl;
    cout << "3) Fast Delivery" << endl;
    cout << "Seleccione el numero de envio: ";
    cin >> opEnvio;

    // Molde/Casteo explícito acoplado al índice base 0 del enum
    if (opEnvio >= 1 && opEnvio <= 3) {
        envioSeleccionado = tEnvio(opEnvio - 1);
    } else {
        envioSeleccionado = envio_no_valido;
    }
}

#endif