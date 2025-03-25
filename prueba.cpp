#include "funcionesAgregar.h"
#include "/home/bryan/Documents/VSCode/Gestion_Empresarial/estructuras/arbol.h"

#include <iostream>

using namespace std;

int main(){
    int idCliente=0;
    datosPedidos dato1;
    dato1.productosSolicitados.push_back("Pera");
    arbolClientes->insertar(idCliente,"nombre","correo","telfeno",12);

    arbolVentas->leerEnArchivoBinario();
    idVentas=arbolVentas->getID()+1;
    arbolVentas->insertar(idVentas,idCliente,"fecha",2,24);
    cout<<idVentas<<endl;
    arbolVentas->buscar(idVentas)->productosVendidos=dato1.productosSolicitados;
    arbolVentas->guardarEnArchivoBinario();
    arbolClientes->buscar(idCliente)->saldo=3;
    arbolClientes->guardarEnArchivoBinario();
}






