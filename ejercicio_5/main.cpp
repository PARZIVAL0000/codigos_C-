#include <iostream>
#include <unistd.h>
using namespace std;

void DayYear(int day,int month,int year){
    // 07/03/2005
    /**
    Como ENERO, MARZO, MAYO, JULIO, AGOSTO, OCTUBRE, DICIEMBRE -> Tienen 31 dias....
    Como ABRIL, JUNIO, SEPTIEMBRE, NOVIEMBRE -> Tienen 30 dias....
    como FEBRERO -> Tienen 28 dias | Si es año bisiesto FEBRERO -> Tiene 29 dias...
    **/
    int dias_year = day;

    while((month-1) >= 1){
        //switch
        switch(month){
            case 4:
            case 6:
            case 9:
            case 11:
                dias_year += 30;
                break;


            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:

                dias_year += 31;
                break;

            case 2:
                if(year%4==0){
                    //bisiesto
                    dias_year += 29;
                }else{
                    //no lo es...
                    dias_year += 28;
                }
                break;
        }
        month -= 1;
    }
    cout << dias_year;
}


int main()
{
/*
     Hacer un programa en C++que solicite al usuario que ingrese una fecha y calcule el día
correspondiente del año. Ejemplo, si se ingresa la fecha 31/12/1998, el número que se visualizará
será 365.
    */
    string fecha;

    cout << "============================================" << endl;
    cout << "|calcular dia del año | formato[31/12/1998]|" << endl;
    cout << "============================================" << endl;


    cout << "[>] Introduce tu fecha: " << endl;
    cin >> fecha;

    //Extraemos partes de nuestra fecha....
    string day = fecha.substr(0,2);
    string month = fecha.substr(3,2);
    string year = fecha.substr(fecha.length() - 4, 4);

    /**
    Como ENERO, MARZO, MAYO, JULIO, AGOSTO, OCTUBRE, DICIEMBRE -> Tienen 31 dias....
    Como ABRIL, JUNIO, SEPTIEMBRE, NOVIEMBRE -> Tienen 30 dias....
    como FEBRERO -> Tienen 28 dias | Si es año bisiesto FEBRERO -> Tiene 29 dias...
    **/
    int m = stoi(month);
    int d = stoi(day);
    int y = stoi(year);

    DayYear(d, m, y);

    return 0;
}
