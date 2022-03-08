/*
  Автор     : Хромов Е.А.
  Группа    : ПИЗ-211
  Дата      : 08.03.2022
  Название  : Базовые понятия языка С#
*/
// Используемые пространства имен

namespace Mass {
    class Program {
        static void Main() {
            Console.Write("Введите число для изменения: ");
            int a = Convert.ToInt32(Console.ReadLine());
            string b = a.ToString(), d = "";//Length
            char[] arr;
            
            if (a >= 100) {
                arr = b.ToCharArray();
                
                char c = arr[1]; //Сохранить 2 символ 
                _ = int.Parse(c.ToString());

                Array.Clear(arr, 1, 1); //Удалить 2 символ строки

                for (int i = 0; i < arr.Length; i++){
                    d += arr[i];
                }
                Console.WriteLine(d + c);

            }
            else {
                Console.WriteLine("Число меньше 100");
                return;
            }

            // Ожидание нажатия клавиши
            Console.ReadKey();
        }
    }
}
