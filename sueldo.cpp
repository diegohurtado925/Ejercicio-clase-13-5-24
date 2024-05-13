#include <iostream>
using namespace std;
int main ()
{
    string Nombre;
    int horas;
    float ganancia = 0, impuestos1 = 0.8, impuesto2 = 0.7;

    cout << "Ingrese su nombre: ";
    cin >> Nombre;

    cout << "Ingrese cuantas horas ha trabajado: ";
    cin >> horas;

    

    if (horas<=160)
    {
        cout << "El trabajador: " << Nombre << endl << "Tiene un salario de: " << "$" << (horas*10) <<endl << "Su salario es libre de impuestos" << endl;;
    }

    if (horas > 160)
    {
        ganancia = (( ( horas - 160 ) * 15) + 1600 );

        if ( ganancia <= 2000)
        {
        cout << "El trabajador: " << Nombre << endl << "Tiene un salario de: " << "$" << (( ( horas - 160 ) * 15) + 1600 ) << endl << "Su salario es libre de impuestos" << endl;
        }

        else if (2000 < ganancia <= 2200)
        {
        cout << "El trabajador: " << Nombre << endl << "Tiene un salario de: " << "$" << (ganancia*impuestos1) << " (Con descuento de impuestos)" << endl << "Su salario libre de impuestos es: " << ganancia << endl;
        }
        else if (ganancia >= 2201)
        {
            cout <<"El trabajador: " << Nombre << endl << "Tiene un salario de: " <<  "$" << (ganancia*impuesto2) << endl << "(Con descuento de impuestos)" << endl << "Su salario libre de impuestos es: " << ganancia << endl;
        }
        
    }


return 0;

}