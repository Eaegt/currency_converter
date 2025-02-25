using System;

namespace C_Light
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const string CommandBuyRublesForDollars = "1";
            const string CommandBuyRublesForEuro = "2";
            const string CommandBuyDollarsForRubles = "3";
            const string CommandBuyDollarsForEuro = "4";
            const string CommandBuyEuroForRubles = "5";
            const string CommandBuyEuroForDollars = "6";
            const string ExitCommand = "7";

            string menuAction;
            double userMoneyRubles;
            double userMoneyDollars;
            double userMoneyEuro;
            double amountOfCurrency;
            float rublesToDollarsExchangeRrate = 74.9f;
            float dollarsToRublesExchangeRate = 69.6f;
            float dollarsToEuroExchangeRate = 1.07f;
            float buyRublesForEuro = 73.45f;
            float euroToDollarsExchangeRate = 1.12f;
            float euroExchangeRateToRubles = 79.5f;
            bool isExitProgram = true;

            Console.WriteLine("Добро пожаловать в приложение по обмену валют");
            Console.Write("Сколько у вас рублей:");
            userMoneyRubles = Convert.ToInt32(Console.ReadLine());
            Console.Write("Сколько у вас долларов:");
            userMoneyDollars = Convert.ToInt32(Console.ReadLine());
            Console.Write("Сколько у вас евро:");
            userMoneyEuro = Convert.ToInt32(Console.ReadLine());

            while (isExitProgram)
            {
                Console.Clear();
                Console.WriteLine($"У вас на балансе {userMoneyRubles}RUB,{userMoneyDollars}USD,{userMoneyEuro}EUR.");

                Console.WriteLine($"{CommandBuyRublesForDollars}<--Ведите для покупки рублей за доллары");
                Console.WriteLine($"{CommandBuyRublesForEuro}<--Ведите для покупки  рублей за евро");
                Console.WriteLine($"{CommandBuyDollarsForRubles}<--Ведите для покупки долларов за рубли");
                Console.WriteLine($"{CommandBuyDollarsForEuro}<--Ведите для покупки долларов за евро");
                Console.WriteLine($"{CommandBuyEuroForRubles}<--Ведите для покупки  евро за рубли");
                Console.WriteLine($"{CommandBuyEuroForDollars}<--Ведите для покупки евро за доллары");
                Console.WriteLine($"{ExitCommand}<--Для выхода из программы напишите exit:");
                menuAction = Console.ReadLine();

                switch (menuAction)
                {
                case CommandBuyRublesForDollars:
                    Console.WriteLine($"Сколько рублей вы хотите купить за доллары по курсу{dollarsToRublesExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyDollars - (amountOfCurrency * dollarsToRublesExchangeRate) >= 0)
                    {
                        userMoneyDollars -= dollarsToRublesExchangeRate * amountOfCurrency;
                        userMoneyRubles += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case CommandBuyRublesForEuro:
                    Console.WriteLine($"Сколько рублей вы хотите купить за евро по курсу{buyRublesForEuro}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyEuro - (amountOfCurrency * buyRublesForEuro) >= 0)
                    {
                        userMoneyEuro -= buyRublesForEuro * amountOfCurrency;
                        userMoneyRubles += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case CommandBuyDollarsForRubles:
                    Console.WriteLine($"Сколько долларов вы хотите купить за рубли по курсу{rublesToDollarsExchangeRrate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyRubles - (amountOfCurrency * rublesToDollarsExchangeRrate) >= 0)
                    {
                        userMoneyRubles -= rublesToDollarsExchangeRrate * amountOfCurrency;
                        userMoneyDollars += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case CommandBuyDollarsForEuro:
                    Console.WriteLine($"Сколько долларов вы хотите купить за евро по курсу{dollarsToEuroExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyEuro - (amountOfCurrency * dollarsToEuroExchangeRate) >= 0)
                    {
                        userMoneyEuro -= (amountOfCurrency * dollarsToEuroExchangeRate);
                        userMoneyDollars += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case CommandBuyEuroForRubles:
                    Console.WriteLine($"Сколько евро вы хотите купить за рубли по курсу{euroExchangeRateToRubles}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyRubles - (amountOfCurrency * euroExchangeRateToRubles) >= 0)
                    {
                        userMoneyRubles -= euroExchangeRateToRubles * amountOfCurrency;
                        userMoneyEuro += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case CommandBuyEuroForDollars:
                    Console.WriteLine($"Сколько евро вы хотите купить за доллары по курсу{euroToDollarsExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyDollars - (amountOfCurrency * euroToDollarsExchangeRate) >= 0)
                    {
                        userMoneyDollars -= euroToDollarsExchangeRate * amountOfCurrency;
                        userMoneyEuro += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("У вас недостаточно средств");
                    }
                    break;

                case ExitCommand:
                    isExitProgram = false;
                    break;
                }
        
            }
        }
    }
}