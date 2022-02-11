/*
  Автор     : Хромов Е.А.
  Группа    : ПИз-211
  Дата      : 07.02.2022
  Название  : Обработка массивов, вариант 12
*/

#include <iostream>
#include <iomanip>
#include "Обработка массивов.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int columns = 10, row = 10;
    double t[columns][row], min, max;
    int Compl, a, b, i, j, min_i, max_i, min_j, max_j;

    //Параметры массива
    cout << "Максимальный размер матрицы 10х10 \n" << endl;
    cout << "Введите данные матрицы: \n";
    cout << "\t Кол-во столбцов = ";   cin >> a;
    cout << "\t Кол-во строк = ";      cin >> b;
    cout << endl;
    
    cout << "Выберите вариант заполнения матрицы: \n" << "\t 1.Рандомно \n" << "\t 2.Вручную \n";
    cin >> Compl;

    //Заполнение массива 
    //Рандомное заполнение
    if (Compl == 1) { 
        for (i = 0; i < a; i += 1) {
            for (j = 0; j < b; j += 1) {
                t[i][j] = rand() % 99;
            }
        }    
    } 
    //Поэлементное заполнение
    else if (Compl == 2) { 
        for (i = 0; i < a; i += 1) {
            for (j = 0; j < b; j += 1) {
                cout << "Элемент " << i << "\\" << j << ":";
                cin >> t[i][j];
            }
        }    
    }
    //Нет такого варианта ответа, возврат
    else { 
        cout << "Данного варианта нет в списке" << endl;
        system("pause");
        return 0;
    }
    
    //Вывод созданной матрицы
    cout << endl;
    cout << "Исходная матрица" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << setw(4) << t[i][j];
        }
        cout << endl;
    }
   
    min = t[0][0]; max = t[0][0];
    min_i = 0; max_i = 0; min_j = 0; max_j = 0;
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (t[i][j] < min) { min = t[i][j]; min_i = i; min_j = j; }
            if (t[i][j] > max) { max = t[i][j]; max_i = i; max_j = j; }
        }
    }
    cout << endl;
    cout << "Минимальный эл-т: " << min << endl;
    cout << "Максималный эл-т: " << max << endl;
    cout << endl;
    //Замена элементов
    t[min_i][min_j] = max;
    t[max_i][max_j] = min;

    
    //Вывод матрицы
    cout << "Измененная матрица" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << setw(4) << t[i][j];
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
