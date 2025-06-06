#include <iostream>
using namespace std;

int main()
{
    // Creando variables para creacion de carrito
    int eleccion, compra;
    int salir = 5;

    do
    {

        // Presentacion de tiendita, y seleccion para el switch
        cout << "Bienvenido a la tienda online, que desea hacer en este caso" << endl;
        cout << "1- Ver productos disponibles" << endl;
        cout << "2- Agregar productos al carro" << endl;
        cout << "3- Ver el carrito de compras" << endl;
        cout << "4- Finalizar compra y salir " << endl;
        cin >> eleccion;

        switch (eleccion) // Creacion de switch para las diferentes opciones
        {
        case 1: // Caso mostrar los objetos
            cout << "Nuestros productos disponibles son :" << endl;
            cout << "1- Audifonos inalambricos $75" << endl;
            cout << "2- Laptop basica $385" << endl;
            cout << "3- Tablet basica $285" << endl;
            cout << "Desea agregar algo de aqui" << endl;
            cin >> compra;
            return 0;
            break;

        case 2: // Caso agregar los productos a la tienda

            cout << "De los articulos seleccionados digite cual desea agregar al carrito" << endl;
            cin >> compra;
            break;

        case 3: // Caso ver carrito de compras
            cout << "En su carrito de compras usted ha agregado" << compra;
            break;

        case 4: // Finalizar compra y salir

            cout << "Su compra ha sido exitosa usted su total es de $75, tenga un buen dia" << endl;
            break;

        default:
            cout << "Seleccione una opcion valida" << endl;
            break;
        }

        cout << "Desea salir? para confirmar digite 5" << endl;
        break;

    } while (salir != 5);

    cout << "Usted ha salido exitosamente, feliz dia" << endl;
}
