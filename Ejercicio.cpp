#include <iostream>

using namespace std;

int main()
{

    int userage;
    int usercategory;
    double wallet;
    double walletTotal;
    int userpurchase;
    double productstudent;
    double discountstudent;
    double productpro;
    double discountpro;

    wallet = 1000;

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
                    cout << "Seleccione el producto que desea comprar: " << endl;
                    cout << "1 | Laptop Basica: $900" << endl;
                    cout << "2 | Tablet Estudiantil: $600" << endl;
                    cout << "3 | Chromebook: $700" << endl;
                    cin >> userpurchase;

                    if (userpurchase > 3 || userpurchase < 1)
                    {
                        cout << "Ingrese un numero valido" << endl;
                    }
                    else
                    {
                        switch (userpurchase)
                        {
                        case 1:

                            discountstudent = 900 * 0.20;
                            productstudent = 900 - discountstudent;
                            walletTotal = wallet - productstudent;

                            cout << "Gracias por su compra Laptop Basica el saldo total en su cuenta es: " << walletTotal << endl;

                            break;
                        case 2:

                            discountstudent = 600 * 0.20;
                            productstudent = 600 - discountstudent;
                            walletTotal = wallet - productstudent;

                            cout << "Gracias por su compra Tablet Estudiantil el saldo total en su cuenta es: " << walletTotal << endl;

                            break;
                        case 3:

                            discountstudent = 700 * 0.20;
                            productstudent = 700 - discountstudent;
                            walletTotal = wallet - productstudent;

                            cout << "Gracias por su compra Chromebook el saldo total en su cuenta es: " << walletTotal << endl;

                            break;
                        default:
                            break;
                        }
                    }

                    break;
                case 2:
                    cout << "Seleccione el producto que desea comprar: " << endl;
                    cout << "1 | Laptop Avanzada: $1500" << endl;
                    cout << "2 | Tablet Pro: $1200" << endl;
                    cout << "3 | Estacion de trabajo: $2000" << endl;
                    cin >> userpurchase;

                    if (userpurchase > 3 || userpurchase < 1)
                    {
                        cout << "Ingrese un numero valido" << endl;
                    }
                    else
                    {
                        switch (userpurchase)
                        {
                        case 1:

                            discountpro = 1500 * 0.10;
                            productpro = 1500 - discountpro;
                            walletTotal = wallet - productpro;

                            if (walletTotal < 1000)
                            {
                                cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                            }
                            else
                            {
                                cout << "Gracias por su Laptop Avanzada compra el saldo total en su cuenta es: " << walletTotal << endl;
                            }

                            break;
                        case 2:

                            discountpro = 1200 * 0.10;
                            productpro = 1200 - discountpro;
                            walletTotal = wallet - productpro;

                            if (walletTotal < 1000)
                            {
                                cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                            }
                            else
                            {
                                cout << "Gracias por su Tablet Pro compra el saldo total en su cuenta es: " << walletTotal << endl;
                            }

                            break;
                        case 3:

                            discountpro = 2000 * 0.10;
                            productpro = 2000 - discountpro;
                            walletTotal = wallet - productpro;

                            if (walletTotal < 1000)
                            {
                                cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                            }
                            else
                            {

                                cout << "Gracias por su compra Estacion de trabajo el saldo total en su cuenta es: " << walletTotal << endl;
                            }

                            break;
                        default:
                            break;
                        }
                        break;
                    case 3:
                        cout << "Seleccione el producto que desea comprar: " << endl;
                        cout << "1 | Laptop Basica: $900" << endl;
                        cout << "2 | Tablet Estudiantil: $600" << endl;
                        cout << "3 | Chromebook: $700" << endl;
                        cout << "4 | Laptop Avanzada: $1500" << endl;
                        cout << "5 | Tablet Pro: $1200" << endl;
                        cout << "6 | Estacion de trabajo: $2000" << endl;
                        cin >> userpurchase;

                        if (userpurchase > 6 || userpurchase < 1)
                        {
                            cout << "Ingrese un numero valido" << endl;
                        }
                        else
                        {
                            switch (userpurchase)
                            {
                            case 1:

                                discountstudent = 900 * 0.20;
                                productstudent = 900 - discountstudent;
                                walletTotal = wallet - productstudent;

                                cout << "Gracias por su compra de Laptop Basica el saldo total en su cuenta es: " << walletTotal << endl;

                                break;
                            case 2:

                                discountstudent = 600 * 0.20;
                                productstudent = 600 - discountstudent;
                                walletTotal = wallet - productstudent;

                                cout << "Gracias por su compra Tablet Estudiantil el saldo total en su cuenta es: " << walletTotal << endl;

                                break;
                            case 3:

                                discountstudent = 700 * 0.20;
                                productstudent = 700 - discountstudent;
                                walletTotal = wallet - productstudent;

                                cout << "Gracias por su compra Chromebook el saldo total en su cuenta es: " << walletTotal << endl;

                                break;
                            case 4:

                                discountpro = 1500 * 0.10;
                                productpro = 1500 - discountpro;
                                walletTotal = wallet - productpro;

                                if (walletTotal < 1000)
                                {
                                    cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                                }
                                else
                                {
                                    cout << "Gracias por su compra Laptop Avanzada el saldo total en su cuenta es: " << walletTotal << endl;
                                }

                                break;
                            case 5:

                                discountpro = 1200 * 0.10;
                                productpro = 1200 - discountpro;
                                walletTotal = wallet - productpro;

                                if (walletTotal < 1000)
                                {
                                    cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                                }
                                else
                                {
                                    cout << "Gracias por su compra Tablet Pro el saldo total en su cuenta es: " << walletTotal << endl;
                                }

                                break;
                            case 6:

                                discountpro = 2000 * 0.10;
                                productpro = 2000 - discountpro;
                                walletTotal = wallet - productpro;

                                if (walletTotal < 1000)
                                {
                                    cout << "No puede realizar la compra saldo insuficiente, saldo que faltaria para completar la compra: " << walletTotal << endl;
                                }
                                else
                                {

                                    cout << "Gracias por su compra Estacion de trabajo el saldo total en su cuenta es: " << walletTotal << endl;
                                }

                                break;
                            default:
                                break;
                            }
                        }

                        break;

                    default:
                        break;
                    }
                }
            }
        }

        return 0;
    }
}