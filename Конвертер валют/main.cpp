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

            Console.WriteLine("����� ���������� � ���������� �� ������ �����");
            Console.Write("������� � ��� ������:");
            userMoneyRubles = Convert.ToInt32(Console.ReadLine());
            Console.Write("������� � ��� ��������:");
            userMoneyDollars = Convert.ToInt32(Console.ReadLine());
            Console.Write("������� � ��� ����:");
            userMoneyEuro = Convert.ToInt32(Console.ReadLine());

            while (isExitProgram)
            {
                Console.Clear();
                Console.WriteLine($"� ��� �� ������� {userMoneyRubles}RUB,{userMoneyDollars}USD,{userMoneyEuro}EUR.");

                Console.WriteLine($"{CommandBuyRublesForDollars}<--������ ��� ������� ������ �� �������");
                Console.WriteLine($"{CommandBuyRublesForEuro}<--������ ��� �������  ������ �� ����");
                Console.WriteLine($"{CommandBuyDollarsForRubles}<--������ ��� ������� �������� �� �����");
                Console.WriteLine($"{CommandBuyDollarsForEuro}<--������ ��� ������� �������� �� ����");
                Console.WriteLine($"{CommandBuyEuroForRubles}<--������ ��� �������  ���� �� �����");
                Console.WriteLine($"{CommandBuyEuroForDollars}<--������ ��� ������� ���� �� �������");
                Console.WriteLine($"{ExitCommand}<--��� ������ �� ��������� �������� exit:");
                menuAction = Console.ReadLine();

                switch (menuAction)
                {
                case CommandBuyRublesForDollars:
                    Console.WriteLine($"������� ������ �� ������ ������ �� ������� �� �����{dollarsToRublesExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyDollars - (amountOfCurrency * dollarsToRublesExchangeRate) >= 0)
                    {
                        userMoneyDollars -= dollarsToRublesExchangeRate * amountOfCurrency;
                        userMoneyRubles += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
                    }
                    break;

                case CommandBuyRublesForEuro:
                    Console.WriteLine($"������� ������ �� ������ ������ �� ���� �� �����{buyRublesForEuro}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyEuro - (amountOfCurrency * buyRublesForEuro) >= 0)
                    {
                        userMoneyEuro -= buyRublesForEuro * amountOfCurrency;
                        userMoneyRubles += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
                    }
                    break;

                case CommandBuyDollarsForRubles:
                    Console.WriteLine($"������� �������� �� ������ ������ �� ����� �� �����{rublesToDollarsExchangeRrate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyRubles - (amountOfCurrency * rublesToDollarsExchangeRrate) >= 0)
                    {
                        userMoneyRubles -= rublesToDollarsExchangeRrate * amountOfCurrency;
                        userMoneyDollars += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
                    }
                    break;

                case CommandBuyDollarsForEuro:
                    Console.WriteLine($"������� �������� �� ������ ������ �� ���� �� �����{dollarsToEuroExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyEuro - (amountOfCurrency * dollarsToEuroExchangeRate) >= 0)
                    {
                        userMoneyEuro -= (amountOfCurrency * dollarsToEuroExchangeRate);
                        userMoneyDollars += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
                    }
                    break;

                case CommandBuyEuroForRubles:
                    Console.WriteLine($"������� ���� �� ������ ������ �� ����� �� �����{euroExchangeRateToRubles}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyRubles - (amountOfCurrency * euroExchangeRateToRubles) >= 0)
                    {
                        userMoneyRubles -= euroExchangeRateToRubles * amountOfCurrency;
                        userMoneyEuro += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
                    }
                    break;

                case CommandBuyEuroForDollars:
                    Console.WriteLine($"������� ���� �� ������ ������ �� ������� �� �����{euroToDollarsExchangeRate}");
                    amountOfCurrency = Convert.ToInt32(Console.ReadLine());

                    if (userMoneyDollars - (amountOfCurrency * euroToDollarsExchangeRate) >= 0)
                    {
                        userMoneyDollars -= euroToDollarsExchangeRate * amountOfCurrency;
                        userMoneyEuro += amountOfCurrency;
                    }
                    else
                    {
                        Console.WriteLine("� ��� ������������ �������");
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