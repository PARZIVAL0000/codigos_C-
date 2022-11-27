#include <iostream>
#include <unistd.h>

using namespace std;

void signoZodiacal(int month = 0, int day = 0){
    switch(month){
        case 1:

            //del 22 de diciembre al 20 de enero
            if(day >= 1 && day <= 20){
                system("clear");
                cout << "[**] Tu signo zodiacal es Capricornio" << endl;
            }

            //del 21 de Enero al 19 de Febrero -> Acuario
            if(day >= 21 && day <= 31){
                system("clear");
                cout << " [**] Tu signo zodiacal es Acuario" << endl;
            }

            break;

        case 2:

            //del 21 de Enero al 19 de Febrero -> Acuario
            if(day >= 1 && day <= 19){
                system("clear");
                cout << "[**] Tu signo zodiacal es Acuario" << endl;
            }

             //del 20 de Febrero al 20 marzo.... -> Piscis
             if(day >= 20 && day <= 28){
                system("clear");
                cout << "[**] Tu signo zodiacal es Piscis" << endl;
             }

            break;

        case 3:
            //del 20 de Febrero al 20 marzo... -> Piscis
            if(day >= 1 && day <= 20){
                system("clear");
                cout << "[**] Tu signo zodiacal es Piscis" << endl;
            }

            if(day >= 21 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Aries" << endl;
            }

            break;

        case 4:

            if(day >= 1 && day <= 19){
                system("clear");
                cout << "[**] Tu signo zodiacal es Aries" << endl;
            }

            if(day >= 20 && day <= 30){
                system("clear");
                cout << "[**] Tu signo zodiacal es Tauro" << endl;
            }

            break;

        case 5:

            if(day >= 1 && day <= 20){
                system("clear");
                cout << "[**] Tu signo zodiacal es Tauro" << endl;
            }

            if(day >= 21 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Geminis" << endl;
            }

            break;

        case 6:

            if(day >=1 && day <= 21){
                system("clear");
                cout << "[**] Tu signo zodiacal es Geminis" << endl;
            }

            if(day >= 22 && day <= 30){
                system("clear");
                cout << "[**] Tu signo zodiacal es Cancer" << endl;
            }

            break;

        case 7:

            if(day >= 1 && day <= 21){
                system("clear");
                cout << "[**] Tu signo zodiacal es Cancer" << endl;
            }

            if(day >= 22 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Leo" << endl;
            }

            break;

        case 8:

            if(day >= 1 && day <= 21){
                system("clear");
                cout << "[**] Tu signo zodiacal es Leo" << endl;
            }

            if(day >= 22 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Virgo" << endl;
            }

            break;

        case 9:

            if(day >= 1 && day <= 22){
                system("clear");
                cout << "[**] Tu signo zodiacal es Virgo" << endl;
            }

            if(day >= 23 && day <= 30){
                system("clear");
                cout << "[**] Tu signo zodiacal es Libra" << endl;
            }

            break;

        case 10:

            if(day >= 1 && day <= 22){
                system("clear");
                cout << "[**] Tu signo zodiacal es Libra" << endl;
            }

            if(day >= 23 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Escorpio" << endl;
            }

            break;

        case 11:

            if(day >= 1 && day <= 21){
                system("clear");
                cout << "[**] Tu signo zodiacal es Escorpio" << endl;
            }


            if(day >= 22 && day <= 30){
                system("clear");
                cout << "[**] Tu signo es Sagitario" << endl;
            }

            break;

        case 12:
            if(day >= 1 && day <= 21){
                system("clear");
                cout << "[**] Tu signo es Sagitario" << endl;
            }

            //del 22 de diciembre al 20 de enero
            if(day >= 22 && day <= 31){
                system("clear");
                cout << "[**] Tu signo zodiacal es Capricornio" << endl;
            }
            break;

        default:
            break;
    }

}

int main()
{
    // Construir un programa que calcule y presente por pantalla el signo del zodiaco a partir de la
    //introducción por teclado del día y mes de nacimiento como números enteros.
    int day, month = 0;

    cout << "**************************************************" << endl;
    cout << "|  TU SIGNO ZODIACAL                             |" << endl;
    cout << "**************************************************" << endl;
    sleep(2);
    system("clear");


    cout << "\n[>] Insert dia de nacimiento: "; cin >> day;
    cout << "\n[>] Inserta el mes de tu nacimiento: "; cin >> month;

    signoZodiacal(month, day);



    return 0;
}
