#include "funciones.h"

bool esint(const string& entrada){
    istringstream iss(entrada);
    int numero;
    iss>>numero;
    return !iss.fail()&&iss.eof();
}

bool esdouble(const string& entrada){
    istringstream iss(entrada);
    double numero;
    iss>>noskipws>>numero;
    return !iss.fail()&&iss.eof();
}
