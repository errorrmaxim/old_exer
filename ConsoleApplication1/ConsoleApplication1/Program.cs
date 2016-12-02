using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Введите строку:");
            string line = Console.ReadLine();
            string[] words = line.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            int max = words[0].Length, min = words[0].Length;
            foreach (string str in words)
            {
                if (str.Length > max) max = str.Length;
                if (str.Length < min) min = str.Length;
            }
            Console.WriteLine("Длина самого длинного слова: " + max);
            Console.WriteLine("Длина самого короткого слова: " + min);
            Console.ReadLine();
            Console.ReadKey();
        }
    }
}
