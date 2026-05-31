#ifndef TRADUCTORES_HPP
#define TRADUCTORES_HPP

#include <string>
#include "Tipos.hpp"

using namespace std;

// Traduce el enum tProducto a texto descriptivo
string traducirProducto(tProducto producto) {
    string texto;
    if (producto == simple) { texto = "Simple"; }
    else if (producto == medio) { texto = "Medio"; }
    else if (producto == calidad) { texto = "Calidad"; }
    else if (producto == premium) { texto = "Premium"; }
    else { texto = "Invalido / No seleccionado"; }
    return texto;
}

// Traduce el enum tEnvio a texto descriptivo
string traducirEnvio(tEnvio envio) {
    string texto;
    if (envio == normal) { texto = "Normal"; }
    else if (envio == express) { texto = "Express"; }
    else if (envio == fast_delivery) { texto = "Fast Delivery"; }
    else { texto = "Invalido / No seleccionado"; }
    return texto;
}

#endif