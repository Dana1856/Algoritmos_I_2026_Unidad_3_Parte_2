#ifndef TIPOS_HPP
#define TIPOS_HPP

// Conjunto de opciones de productos (Base 0 secuencial)
typedef enum {
    simple,
    medio,
    calidad,
    premium,
    producto_no_valido
} tProducto;

// Conjunto de opciones de tipos de envío
typedef enum {
    normal,
    express,
    fast_delivery,
    envio_no_valido
} tEnvio;

#endif