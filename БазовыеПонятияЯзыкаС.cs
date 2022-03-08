/*
  Автор     : Хромов Е.А.
  Группа    : ПИЗ-211
  Дата      : 08.03.2022
  Название  : Базовые понятия языка С#
*/
// Используемые пространства имен
using System;

namespace HelloWorld {
    
    class Program {
     
        static void Main() {
            Console.Write("Число = ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Нужнная степень = ");
            int n = Convert.ToInt32(Console.ReadLine());
            int b = 1;

            for (int i = 1; i <= n; i++) {
                b *= a;
            }
            Console.WriteLine(a + " в степени " + n + " = " + b);
            
            // Ожидание нажатия клавиши
            Console.ReadKey();
        }
    }
}
