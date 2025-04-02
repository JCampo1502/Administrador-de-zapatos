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

void administrarVentaZapatosIf(float costoUnitario, double &porcentajeUtilidad, char &tipoZapato);

void administrarVentaZapatosSwitch( float costoUnitario, double &porcentajeUtilidad, char &tipoZapato);

void capturarDatos(string &referencia, string &descripcion,int &talla, int &cantidadDeZapatos,char &disponibie,double &costoUnitario);

void mostrarDatos(string referencia, string descripcion,int talla, int cantidadDeZapatos,char disponibie,double costoUnitario, char tipoZapato, double porcentajeUtilidad);

int main()
{
    string referencia, descripcion;
    int talla, cantidadDeZapatos;    
    char disponibie;
    double costoUnitario, porcentajeUtilidad;
    int opcion;
    char tipoZapato;

    cout << "Seleccione el método a usar:\n1. IF anidados\n2. SWITCH\nOpción: ";
    cin >> opcion;
    
    clearConsole();
    capturarDatos(referencia, descripcion, talla, cantidadDeZapatos, disponibie, costoUnitario);

    if (opcion == 1) {
        administrarVentaZapatosIf( costoUnitario, porcentajeUtilidad, tipoZapato);
    } else {
        administrarVentaZapatosSwitch( costoUnitario, porcentajeUtilidad, tipoZapato);
    }
    
    mostrarDatos(referencia, descripcion, talla, cantidadDeZapatos, disponibie, costoUnitario, tipoZapato, porcentajeUtilidad);
        

    return 0;
}

void capturarDatos(string &referencia, string &descripcion,int &talla, int &cantidadDeZapatos,char &disponibie,double &costoUnitario)
{
    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout << "Digite la referencia del zapato... "<<endl;
    cin >> referencia;
    cout << "Digite una descripcion del zapato... "<<endl;
    getline(cin >> ws, descripcion);
    cout << "Digite la talla... "<<endl;    
    cin >> talla;
    cout << "Digite la letra si esta disponible o no para la venta S/N... "<<endl;
    cin >> disponibie;
    cout << "Digite la cantidad de zapatos que existen de esta referencia... "<<endl;
    cin >> cantidadDeZapatos;
    cout << "Digite el costo unitario del zapato... "<<endl;
    cin >> costoUnitario;    
    clearConsole();
}

void mostrarDatos(string referencia, string descripcion,int talla, int cantidadDeZapatos,char disponibie,double costoUnitario, char tipoZapato, double porcentajeUtilidad)
{
    double precioUnitario = costoUnitario * (1 + porcentajeUtilidad);
    double utilidadUnidad = precioUnitario - costoUnitario;
    double utilidadTotal = utilidadUnidad * cantidadDeZapatos;
    double utilidadPorcentual = (utilidadUnidad / costoUnitario) * 100;

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES: " << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "TIPO: " << tipoZapato << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponibie << endl;
    cout << "CANTIDAD DE ZAPATOS: " << cantidadDeZapatos << endl;
    cout << "COSTO UNIDAD: " << costoUnitario << endl;
    cout << "COSTO TOTAL: " << (costoUnitario * cantidadDeZapatos) << endl;
    cout << "PRECIO UNIDAD: " << precioUnitario << endl;    
    cout << "PRECIO TOTAL DE "<< cantidadDeZapatos << " UNIDADES: " << (precioUnitario * cantidadDeZapatos) << endl;
    cout << "UTILIDAD POR UNIDAD: " << utilidadUnidad << endl;
    cout << "UTILIDAD TOTAL: " << utilidadTotal << endl;
    cout << "PORSENTAJE DE UTILIDAD: " << utilidadPorcentual << "%" << endl<< endl;
    
    cout << "Gracias por digitar la informacion" << endl;
    cout << "By Javier David Campo Suarez" << endl << endl << endl;
}

void administrarVentaZapatosIf(float costoUnitario, double &porcentajeUtilidad, char &tipoZapato)
{
    if (costoUnitario <= 30000) {
        tipoZapato = 'A';
        porcentajeUtilidad = 0.50;
    } else if (costoUnitario <= 60000) {
        tipoZapato = 'B';
        porcentajeUtilidad = 0.40;
    } else {
        tipoZapato = 'C';
        porcentajeUtilidad = 0.30;
    }
}

void administrarVentaZapatosSwitch( float costoUnitario, double &porcentajeUtilidad, char &tipoZapato)
{

    switch ((costoUnitario > 60000) ? 3 : (costoUnitario > 30000 ? 2 : 1)) {
        case 1:
            tipoZapato = 'A';
            porcentajeUtilidad = 0.50;
            break;
        case 2:
            tipoZapato = 'B';
            porcentajeUtilidad = 0.40;
            break;
        case 3:
            tipoZapato = 'C';
            porcentajeUtilidad = 0.30;
            break;
    }
}


void clearConsole() {
    system(LIMPIAR);
}