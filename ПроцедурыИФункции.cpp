/*
  Автор     : Хромов Е.А.
  Группа    : ПИз-211
  Дата      : 07.02.2022
  Название  : Процедуры и функции, вариант 12
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Заполнение массива
void fill_array(int** arr, const int N, const int M) {   //В параметрах указательная переменная, будущая массивом, и число ячеек массива
    int count = 0, Compl = 0;

    cout << endl << "Выберите вариант заполнения матрицы: " << "1.Рандомно" << "\t 2.Вручную — ";
    cin >> Compl;
    //Заполнение массива 
    //Рандомное заполнение
    if (Compl == 1) {
        for (int i = 0; i < N; i += 1) {
            for (int j = 0; j < M; j += 1) {
                arr[i][j] = rand() % 99;
            }
        }
    }
    //Поэлементное заполнение
    else if (Compl == 2) {
        for (int i = 0; i < N; i += 1) {
            for (int j = 0; j < M; j += 1) {
                cout << "Элемент " << i << "\\" << j << ":";
                cin >> arr[i][j];
            }
        }
    }
    //Нет такого варианта ответа, возврат
    else {
        cout << "Данного варианта нет в списке" << endl;
        system("pause");
    }
}

//Вывод массива на экран
void print_array(int** arr, const int N, const int M) {
    cout << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << setw(4) << arr[i][j];
        }   cout << endl;
    }
}

//Расчет массива на экран
void sum_array(int** arr, const int N, const int M) {
    cout << endl;
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += pow(arr[i][j], 2);
        }
    }
    cout << "Сумма квадратов матрицы: " << sum << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int rowp = 0, colp = 0, rowg = 0, colg = 0;

    cout << "Строки 1 матрицы:"; cin >> rowp;
    cout << "Колонки 1 матрицы:"; cin >> colp;

    cout << "Строки 2 матрицы:"; cin >> rowg;
    cout << "Колонки 2 матрицы:"; cin >> colg;
    
    int** p = new int* [rowp];   //Создание строк 1 матрицы
    for (int i = 0; i < rowp; i++) {
        p[i] = new int[colp];
    }

    int** g = new int* [rowg];   //Создание строк 2 матрицы
    for (int i = 0; i < rowg; i++) {
        g[i] = new int[colg];
    }

    //Создание и вывод матрицы 1
    fill_array(p, rowp, colp);      
    print_array(p, rowp, colp);
    sum_array(p, rowp, colp);
    //Создание и вывод матрицы 2
    fill_array(g, rowg, colg);
    print_array(g, rowg, colg);
    sum_array(g, rowg, colg);


    for (int i = 0; i < rowp; i++) {
        delete[]p[i];        //Отбор у программы выделенной под колонки память
    }
    delete[]p;   //Отбор у программы выделенной под указательную переменную памяти
    for (int i = 0; i < rowg; i++) {
        delete[]g[i];        //Отбор у программы выделенной под колонки память
    }
    delete[]g;   //Отбор у программы выделенной под указательную переменную памяти
    cin.get();
}

