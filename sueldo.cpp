#include <iostream>
using namespace std;

int main()
{
    //Creacion de variables para los impuestos
    int impuesto, totalConI;

    cout << "Buenas tardes, favor digite su sueldo para saber la cantidad de impuesto que se le aplicara" << endl; // Pedirle salario al usuario
    cin >> impuesto; // Recibiendo dato del usuario

    //Aplicando impuesto de 15% si usuario gana mas de $2000
    if (impuesto > 2000)
    {
        totalConI = (impuesto - (impuesto * 0.15));
        cout << "Su sueldo con impuestos aplicados es de " << totalConI << endl;
    }

    //Aplicando impuesto de 10% si usuario gana menos de $2000

    else
    {

        totalConI = (impuesto - (impuesto * 0.10));
        cout << "Su sueldo con impuestos aplicados es de " << totalConI << endl;
    }

    return 0;
}