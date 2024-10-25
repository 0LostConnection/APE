#include "complexo.h"

Complexo adicionar(Complexo a, Complexo b) {
    Complexo resultado;

    resultado.real = a.real + b.real;
    resultado.imag = a.imag + b.imag;

    return resultado;
}

Complexo subtrair(Complexo a, Complexo b) {
    Complexo resultado;

    resultado.real = a.real - b.real;
    resultado.imag = a.imag - b.imag;

    return resultado;
}

Complexo multiplicar(Complexo a, Complexo b) {
    Complexo resultado;

    resultado.real = a.real * b.real - a.imag * b.imag;
    resultado.imag = a.real * b.imag + a.imag * b.real;

    return resultado;
}

Complexo dividir(Complexo a, Complexo b) {
    Complexo resultado;
    
    double denominador = b.real * b.real + b.imag * b.imag;
 
    resultado.real = (a.real * b.real + a.imag * b.imag) / denominador;
    resultado.imag = (a.imag * b.real - a.real * b.imag) / denominador;
 
    return resultado;
}