#include <iostream>

using namespace std;

int main(){

    int userage;

    cout << "Antes debe de ingresar ingrese su edad" << endl;
    cin >> userage;

    if (userage > 100 || userage < 0)
    {
        cout << "Ingrese un numero valido" << endl;
    }else
    {
         if (userage < 16)
    {
        cout << "No cumple con la edad requerida" << endl;
    }else
    {
        
    }
    

    }
    
    

   
    

    return 0;
}