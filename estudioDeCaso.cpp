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
    int talla, cantidadDeZapatos;    
    char disponibie;
    double costoUnitario,precioUnitario;

    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout << "Digite la referencia del zapato... "<<endl;
    cin >> referencia;
    cout << "Digite una descripcion del zapato... "<<endl;
    getline(cin >> ws, descripcion);
    cout << "Digite la talla... "<<endl;    
    cin >> talla;
    cout << "Digite la letra si esta disponible o no para la venta S/N... "<<endl;
    cin >> disponibie;
    cout << "Digite la cantidad de zapatos... "<<endl;
    cin >> cantidadDeZapatos;
    cout << "Digite el costo unitario del zapato... "<<endl;
    cin >> costoUnitario;
    cout << "Digite el precio unitario de venta del zapato... "<<endl;
    cin >> precioUnitario;
    

    clearConsole();
    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES: " << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponibie << endl;
    cout << "CANTIDAD DE ZAPATOS: " << cantidadDeZapatos << endl;
    cout << "COSTO UNIDAD: " << costoUnitario << endl;
    cout << "COSTO TOTAL: " << (costoUnitario * cantidadDeZapatos) << endl;
    cout << "PRECIO UNIDAD: " << precioUnitario << endl;
    cout << "PRECIO TOTAL DE "<< cantidadDeZapatos << " UNIDADES: " << (precioUnitario * cantidadDeZapatos) << endl;
    cout << "UTILIDAD POR UNIDAD: " << (precioUnitario - costoUnitario) << endl;
    cout << "UTILIDAD TOTAL: " << ((precioUnitario - costoUnitario) * cantidadDeZapatos) << endl;
    cout << "UTILIDAD PORCENTUAL: " << (((precioUnitario - costoUnitario) / costoUnitario) * 100) << "%" << endl<< endl;
    
    cout << "Gracias por digitar la informacion" << endl;
    cout << "By Javier David Campo Suarez" << endl << endl << endl;

    return 0;
}


void clearConsole() {
    system(LIMPIAR);
}