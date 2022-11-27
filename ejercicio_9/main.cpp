#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

void opcionUno(){
    //Calculamos la suma de notas ingresadas...

    char opcion;

    double notas = 0;
    double sumaNotas = 0;
    int notasTotal = 1;

    int contador = 0;

    while(contador <= 3){
        cout << "\n\t[>] Ingresa tu nota: "; cin >> notas;
        sumaNotas += notas;

        if(contador == 3){
            cout << "[?] Quieres seguir ingresando notas[Y/N]: ";
            cin >> opcion;

            if(opcion == 'Y' || opcion == 'y'){
                contador = 0;
            }

            if(opcion == 'N' || opcion == 'n'){
                break;
            }
        }

        notasTotal += 1;
        contador+= 1;
    }

    sleep(2);
    system("clear");
    cout << "\n\t\t***************************************" << endl;
    cout << "\t\t| CALCULANDO PROMEDIO                 |" << endl;
    cout << "\t\t***************************************" << endl;

    cout << "Tu promedio general: " << sumaNotas / notasTotal;
}

bool opcionDos(){

    cout << "**************************************************" << endl;
    cout << "| NOMBRE: Dennis Ponce     |   CURSO: PRIMERO C  |" << endl;
    cout << "| INSTITUTO: Instituto Tecnologico Universitario " << endl;
    cout << "                                     Cordillera " << endl;
    cout << "**************************************************" << endl;

    bool elegir = false;
    char op;
    cout << "\n[>] Deseas regresar al menu [Y/N]  "; cin >> op;

    if(op == 'Y' || op == 'y'){
        elegir = true;
        return elegir;
    }

    if(op == 'n' || op == 'N'){
        elegir = false;
        return elegir;
    }
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

            system("clear");
            cout << "\n\t\t**********************************************" << endl;
            cout << "\t\t|     [1] CALCULAR PROMEDIO                  |" << endl;
            cout << "\t\t|     [2] INFO                               |" << endl;
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

                stop = false;


                bool resultado = opcionDos();

                if(resultado){
                    stop = resultado;
                }

            }


            if(op_menu == '3'){
                stop = false;
            }

       }



    }
    return 0;
}
