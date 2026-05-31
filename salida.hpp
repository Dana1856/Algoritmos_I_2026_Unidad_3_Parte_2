#ifndef SALIDA_HPP
#define SALIDA_HPP

#include <iostream>
#include "Tipos.hpp"
#include "Traductores.hpp"

using namespace std;

// Muestra el resumen del procesamiento por consola
void mostrarResumenComanda(tProducto producto, tEnvio envio) {
    cout << "\n================================================" << endl;
    cout << "               RESUMEN DE SU PEDIDO             " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Producto elegido: " << traducirProducto(producto) << endl;
    cout << "Tipo de envio:    " << traducirEnvio(envio) << endl;
    cout << "================================================" << endl;
}

#endif