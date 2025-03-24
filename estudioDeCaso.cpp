#include <iostream>
using namespace std;

#ifdef _WIN32
    #include <windows.h>
    #define LIMPIAR "cls"
#else
    #include <cstdlib>
    #define LIMPIAR "clear"
#endif

void clearConsole();

int main()
{
    string referencia, descripcion;
    int talla, costo, precioVenta;
    char disponibie;
    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout << "Digite la referencia del zapato... "<<endl;
    cin >> referencia;
    cout << "Digite una descripcion del zapato... "<<endl;
    getline(cin >> ws, descripcion);
    cout << "Digite la talla... "<<endl;    
    cin >> talla;
    cout << "Digite la letra si esta disponible o no para la venta S/N... "<<endl;
    cin >> disponibie;
    cout << "Digite el costo del zapato... "<<endl;
    cin >> costo;
    cout << "Digite el precio de venta del zapato... "<<endl;
    cin >> precioVenta;
    clearConsole();
    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES: " << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponibie << endl;
    cout << "COSTO: " << costo << endl;
    cout << "PRECIO: " << precioVenta << endl << endl;
    cout << "Gracias por digitar la informacion" << endl;
    cout << "By Javier David Campo Suarez" << endl << endl << endl;

    return 0;
}


void clearConsole() {
    system(LIMPIAR);
}