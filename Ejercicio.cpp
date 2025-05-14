#include <iostream>

using namespace std;

int main()
{

    int userage;
    int usercategory;

    cout << "Antes debe de ingresar ingrese su edad" << endl;
    cin >> userage;

    if (userage > 100 || userage < 0)
    {
        cout << "Ingrese un numero valido" << endl;
    }
    else
    {
        if (userage < 16)
        {
            cout << "No cumple con la edad requerida" << endl;
        }
        else
        {
            cout << "Seleccione que categoria de productos " << endl;
            cout << "1 | Estudiante" << endl;
            cout << "2 | Profesional" << endl;
            cout << "3 | Ver Todo" << endl;

            cin >> usercategory;

            if (usercategory > 3 || usercategory < 1)
            {
                cout << "Ingrese un numero valido" << endl;
            }
            else
            {
                switch (usercategory)
                {
                case 1:
                    
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;

                default:
                    break;
                }
            }
        }
    }

    return 0;
}