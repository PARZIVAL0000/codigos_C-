#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

void opcionUno(){
    int i = 1;
    char next;

    int notas[];
    int indexador = 0;

    while(i <= 3){
        //Aqui pediremos que nos ingresen notas.
        cout << "[*] Ingresa tu nota:  ";
        cin >> notas[indexador];

        if(i == 3){
            cout << "[?] Quieres seguir ingresando notas [Y/N]:  ";
            cin >> next;

            if(next == 'Y' || next == 'y'){
                i = 0;
            }

            if(next == 'N' || next == 'n'){
                break;
            }

        }

        indexador += 1;
        i+=1;
    }

    sleep(2);
    system("clear");
    //Calculamos las notas ingresadas....
    cout << "\n\t\t******************************************" << endl;
    cout << "\t\t Promediando notas ....                    " << endl;
    cout << "\t\t******************************************" << endl;

    //stoi


}

int main()
{

    /**
     Hacer un programa en C++ que calcule el promedio de las 3 notas de un alumno, el programa va a
    terminar cuando el estudiante no quiera ingresar más notas (WHILE)
    **/

    char op,op_menu;
    bool stop = true;

    cout << "\n\t\t*******************************************" << endl;
    sleep(1);
    cout << "\t\t| PROMEDIO DE NOTAS GENERALES             |" << endl;
    sleep(1);
    cout << "\t\t*******************************************" << endl;
    sleep(1);

    cout << "\n[>] Mostrar Menu [Y/N]: ";
    cin >> op;
    system("clear");

    if(op == 'Y' || op ==' y' && op != 'N' || op != 'n'){

       while(stop){

            cout << "\n\t\t**********************************************" << endl;
            cout << "\t\t|     [1] CALCULAR PROMEDIO                  |" << endl;
            cout << "\t\t|     [2] MOSTRAR DATOS GENERALES            |" << endl;
            cout << "\t\t|     [3] SALIR                              |" << endl;
            cout << "\t\t**********************************************" << endl;

            cout << "\n[>] Escoge una opcion: ";
            cin >> op_menu;
            system("clear");


            /** OPCIONES **/
            if(op_menu == '1'){
                //detenemos como en la opcion de SALIR para poder eliminar nuestro menu y presentar algo nuevo....
                stop = false;

                opcionUno();
            }


            if(op_menu == '2'){


            }

            if(op_menu == '3'){
                stop = false;
            }

       }



    }
    return 0;
}
