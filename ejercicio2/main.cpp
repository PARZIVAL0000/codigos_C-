#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
/*
     Solicitar al usuario una fecha (dd:mm:aaaa) y comprobar si es correcta. Para que una fecha sea
    correcta es
             necesario:
             El año debe ser mayor que cero.
             El mes debe estar entre 1 y 12.
             Dependiendo del mes que sea, el día debe estar dentro de los límites válidos. Los meses que
    tienen 31 días son 1, 3, 5, 7, 8, 10 y 12. Los meses de 30 días son 4, 6, 9 y 11. El mes de 28
    días es 2, excepto en un año bisiesto que es 29 días.
*/

    cout << "**********************************************" << endl;
    cout << "|       FECHA INGRESADA                       " << endl;
    cout << "**********************************************" << endl;

    //definimos nuestra variables para poder aceptar YEAR, MONTH, DAY
    int year,
        month,
        day = 0;

    cout << "[>] Inserta un year: ";
    cin >> year;
    cout << "[>] Inserta un month: ";
    cin >> month;
    cout << "[>] Inserta un day: ";
    cin >> day;

    //hacemos una comprobacion ....
    if(year > 0 && month >= 1 && month <= 12){

        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                //el mes de 31 dias...
                if(day >= 1 && day <= 31){
                   //La fecha es correcta.
                   system("clear");
                   cout << "[*] TU FECHA ES: " << year << ":" << month << ":" << day;
                }
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                //el mes de 30 dias...
                if(day >= 1 && day <= 30){
                    system("clear");
                    cout << "[*] TU FECHA ES: " << year << ":" << month << ":" << day;
                }
                break;

            case 2:
                //calculamos el YEAR si es bisiesto o no lo es.
                if(year%4 == 0){
                    //con 29 dias por ser bisiesto
                    if(day >= 1 && day <= 29){
                        system("clear");
                        cout << "[*] TU FECHA ES: " << year << ":" << month << ":" << day;
                    }
                }else{
                    // //28 dias...
                    if(day >= 1 && day <= 28){
                        system("clear");
                        cout << "[*] TU FECHA ES: " << year << ":" << month << ":" << day;
                    }
                }
                break;
        }
    }

    return 0;
}
