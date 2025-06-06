#include <iostream>
using namespace std;

int main()
{

    int eleccion, compra, algo, mas;

    cout << "Bienvenido a la tienda online, que desea hacer en este caso" << endl;
    cout << "1- Ver productos disponibles" << endl;
    cout << "2- Agregar productos al carro" << endl;
    cout << "3- Ver el carrito de compras" << endl;
    cout << "4- Finalizar compra y salir " << endl;
    cin >> eleccion;

    switch (eleccion)
    {
    case 1:
        cout << "Nuestros productos disponibles son :" << endl;
         cout << "1- Audifonos inalambricos $75" << endl;
         cout << "2- Laptop basica $385" << endl;
         cout << "3- Tablet basica $285" << endl;
         cout << "Desea agregar algo de aqui" << endl;
         cin >> compra;
         return 0;
        break;

        case 2:

        cout << "De los articulos seleccionados digite cual desea agregar al carrito" << endl;

    
    default:
        break;
    }


}