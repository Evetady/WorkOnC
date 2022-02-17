/*
  Автор     : Хромов Е.А.
  Группа    : ПИз-211
  Дата      : 07.02.2022
  Название  : Циклы с ветвлением, вариант 12
*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double TempAverage = 0.0, TempHard = 327.0, TempLiquid = 800.0, Time = 0.0, TimeHard = 0.0;

    TimeHard = -(1 / 0.021) * log(TempHard / TempLiquid);
    //cout << "TimeHard = " << TimeHard << endl;

    while (Time <= 100){      
        if (Time < TimeHard){

            TempAverage = TempLiquid * exp(-0.021 * Time);
            cout << "Time - " << Time << " = " << TempAverage << endl;
        } else if (Time > TimeHard) {
            TempAverage = TempHard * exp(-0.015 * (Time - TimeHard));
            cout << "Time - " << Time << " = " << TempAverage << endl;
        }
        else {
            break;
        }
        Time = Time + 10;
    }
   
    system("pause");
    return 0;
}
