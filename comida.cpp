#include <iostream>
using namespace std;

int main()
{

     // Declaracion de variables para uso de switch
    int comida;

    //Indicacion al usuario de que opciones puede escoger

    cout << "Bienvenido a vida fit, dijite del siguiente menu para saber las calorias de diferentes tipos de comidas que va a consumir :D" << endl;
    cout << "1- Fruta" << endl;
    cout << "2- Verdura" << endl;
    cout << "3- Carne" << endl;

    cin >> comida; //Recibiendo informacion del usuario


    //Creacion de switch para las 3 diferentes posibilidades de eleccion del usuario
    switch (comida)
    {
    case 1:
        cout << "La fruta posee una buena base de azucares naturales y es baja en calorias aproximada 25 calorias cada fruta";
        break;

    case 2:
        cout << "Las verduras poseen una buena base de nutrientes y minerales aproximandamente 65 calorias cada verdura";
        break;

    case 3:
        cout << "La carne posee una fuerte base de proteina y regeneracion de musculo obteniendo aproximadamente 85 calorias cada pedazo de carne ";
        break;

    default:
        cout << "Favor escoger una opcion valida" << endl; //Aviso en caso de que el usuario digite algo invalido
        break;
    }

    return 0;
}