/*
  Автор     : Хромов Е.А.
  Группа    : ПИз-211
  Дата      : 07.02.2022
  Название  : Работа с файлами, вариант 12
*/

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include < stdlib.h >

using namespace std;

struct Data {
    int Number;
    string Surname;
    double Square;
    int Room;
};
Data cd[10];

void ReatTextFile() {
    size_t index = 0;
    ifstream inFile;
    string data, Number, Surname, Square, Room;
    inFile.open("TextFileKW.txt");
    if (inFile.good()) {
        while (getline(inFile, data)) {
            size_t startPos = data.find_first_not_of(",", 0);
            size_t endPos = data.find_first_of(",", startPos);
            Number = data.substr(startPos, endPos - startPos);
            cd[index].Number = stoi(Number);

            startPos = data.find_first_not_of(",", endPos);
            endPos = data.find_first_of(",", startPos);
            Surname = data.substr(startPos, endPos - startPos);
            cd[index].Surname = Surname;

            startPos = data.find_first_not_of(",", endPos);
            endPos = data.find_first_of(",", startPos);
            Square = data.substr(startPos, endPos - startPos);
            cd[index].Square = atof(Square.c_str());

            startPos = data.find_first_not_of(",", endPos);
            endPos = data.find_first_of(",", startPos);
            Room = data.substr(startPos, endPos - startPos);
            cd[index].Room = stoi(Room);

            ++index;
        }
    }
    else {
        cout << "can't open" << endl;
    }
    inFile.close();//close the file

    for (size_t i = 0; i < 10; i++) {
        cout << "Номер кв: "            << cd[i].Number     << setw(4) << " ";
        cout << "Фамилия владельца: "   << cd[i].Surname    << setw(4) << " ";
        cout << "Общая площадь: "       << cd[i].Square     << setw(4) << " ";
        cout << "Кол-во комнат: "       << cd[i].Room       << setw(4) << " ";
        
        
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 0, k = 0, n = 0, in = 0;
    double Square = 0.0, Summ = 0.0, Num = 0.0, minNum = 0.0, Room = 0.0, minRoom = 0.0, arif = 0.0;
    
    ReatTextFile();
    cout << endl << "Минимальная площадь квартиры: "; cin >> a;
    cout << endl << "Требуемое количество комнат: "; cin >> k;

    for (size_t i = 0; i < 10; i++) {
        //Общая площадь квартир больше минимальной
        Square = cd[i].Square;
        if (floor(Square) > a){ 
            Summ += Square; 
        }
        
        //Наименьшее число комнат
        Room = cd[i].Room;
        if (minRoom == 0.0) { minRoom = Room; }
        else if (minRoom > Num) { minRoom = Room; }

        //Средняя площадь квартир
        if (floor(Room) == k){
            n += Square;
            in++;
        }
    }
    cout << "Сумма площадей квартир: " << Summ << endl;
    cout << "Наименьшее число комнат: " << minRoom << endl;

    int res = 0;
    if (in != 0){
        res = n / in;
    }
    cout << "Средняя площадь квартир с заданным числом комнат: " << res << endl;

    system("pause");
    return 0;
}
