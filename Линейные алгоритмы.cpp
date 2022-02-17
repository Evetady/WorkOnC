/*
  Автор     : Хромов Е.А.
  Группа    : ПИз-211
  Дата      : 07.02.2022
  Название  : Линейные алгоритмы, вариант 12
*/

#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

using namespace std;
int main(){

    double a = 3.244, b = 1.720, S1 = 0.0, S2 = 0.0, V1 = 0.0, V2 = 0.0, exct = 0.0;

    /*cout << "Введите оси эллипсоидов\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;*/

    exct = sqrt(1 - (pow(b, 2) / pow(a, 2)));

    S1 = 2 * PI * (pow(b,2) + (a*b * asin(exct) / exct));
    V1 = ((4. / 3) * PI * (a * b * b));

    S2 = 2 * PI * (pow(b, 2) + (a * b * asin(exct) / exct));
    V2 = ((4. / 3) * PI * (a * a * b));

    cout << "exct = " << exct<< endl;
    cout << "S1 = " << S1 << endl;
    cout << "V1 = " << V1 << endl;

    cout << "S2 = " << S2 << endl;
    cout << "V2 = " << V2 << endl;

    system("pause");
    return 0;
}

