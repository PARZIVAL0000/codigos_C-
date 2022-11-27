#include <iostream>
#include <unistd.h>

using namespace std;
int main(){

    // <unistd.h> para Linux -> sleep() y usleep()
    // <Windows.h> Para Windows -> sleep()

   /**
    El dueño de una papelería desea un programa que le indique el precio de venta de un artículo dado. El
    precio se calcula de acuerdo con la siguiente fórmula: PVP = precio_coste + ganancia. Donde la ganancia
    será:
             El 15% si el precio de coste es inferior 3.
             50 Centavos si el precio de coste está entre 3 y 6.
             El 25% si el precio de coste supera los 6.
    **/
    //==========================================================
    //ARTICULO FORMULA:
    //      PRECIO = precio_coste + ganancia
    //==========================================================
    //OBJETIVO -> MOSTRAR PRECIO DE VENTA DE UN ARTICULO.

    double precio, precio_coste, ganancia;
    bool stop = true;
    char opcion;
    //variables para nuestro switch
    bool encender_menu = false;
    char op;

    //El encabezado no vamos a incluir en nuestro WHILE. Debido a que solo es algo temporal... una simple presentacion sin
    // mucha importancia "Por ahora, claro"
    sleep(2);
    cout << "\n\n\t***********************************************************" << endl;
    sleep(2);
    cout << "\t| [*] Generamos el precio de venta de un articulo  :)     |" << endl;
    sleep(2);
    cout << "\t***********************************************************" << endl;
    sleep(2);
    system("clear");


    while(stop){
        system("clear");
        cout << "\n\t [1] Introducir precio de costo" << endl;
        cout << "\n\t [2] Salir del programa...." << endl;

        cout << "\n\t [>] Elegir: "; cin >> opcion;
        system("clear");

        switch(opcion){
            case '1':
                cout << "\n[>] Introduce tu precio de costo:  " << endl;
                cin >> precio_coste;



                //=======================================================================
                // ========================== CALCULAMOS PRECIOS ========================
                // ======================================================================
                if(precio_coste < 3){
                    //ganancia -> 15%;
                    ganancia = 0.15;
                    precio = precio_coste + ganancia;
                    system("clear");
                    cout << " [*] El precio del producto es: " << precio << endl;

                    encender_menu = true;
                }

                else if(precio_coste >= 3 && precio <= 6){
                    ganancia = 0.50;
                    precio = precio_coste + ganancia;
                    system("clear");
                    cout << "[*] El precio del producto es: " << precio << endl;


                    encender_menu = true;
                }

                else if(precio_coste > 6){
                    ganancia = 0.16;
                    precio = precio_coste + ganancia;
                    system("clear");
                    cout << " [*] El precio del producto es: " << precio << endl;

                    encender_menu = true;
                }



                //=======================================================================
                //======================GENERAMOS MENU===================================
                //=======================================================================
                if(encender_menu){

                    cout << "\n\t [?] Quieres regresar al menu [Y/N]:  ";cin>>op;

                    if( (op == 'Y' || op == 'y') && (op != 'N' || op != 'n') ){
                        //redireccionamos a la parte inicial de nuestro programa....
                        system("clear");
                        cout << "\n Redireccionando ... \n";
                    }else{
                        //Lo sacamos del programa...
                        stop = false;
                    }
                }

                break;

            case '2':
                stop = false;
                break;
            default:
                break;

        }
      }

    return 0;
}
