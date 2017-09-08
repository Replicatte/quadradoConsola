using System;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Lenovo";
            Console.WriteLine("Pulsa una tecla para cambiar el titulo");
            while (true)
            {
                Console.ReadKey(true);
                Console.BackgroundColor = ConsoleColor.Red;
                Console.ForegroundColor = ConsoleColor.White;
                String textoTitulo = Console.Title;

                for (int i = 0; i < args.Length; i++)
                    Console.WriteLine(args[i]);                
            }
             
            
        }
    }
}