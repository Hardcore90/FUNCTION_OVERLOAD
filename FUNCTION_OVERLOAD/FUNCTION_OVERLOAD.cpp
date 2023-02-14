#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

bool squar(int n)
{
    for (int i = 1; i*i <= n; i++)
    {
        if(i*i==n)
        {
            return true;
        }
    }
    return false;
}

void squar(int n,bool &k)
{
    for(int i = 1;i*i <= n;i++)
    {
        if(i*i==n)
        {
            k = true;
        }
        else
        {
            k = false;
        }
    }
}

void squar(int n, bool *k)
{
    for(int i = 1;i*i <= n; i++)
    {
        if(i*i==n)
        {
            *k = true;
        }
        else
        {
            *k = false;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Задание\n\n");
    printf("Разработать функцию, определяющую, является ли натуральное число квадратом какого-либо другого целого числа. (Не использовать стандартную функцию вычисления корня.)\n\nВвести три натуральных числа.Используя разработанную функцию определить сколько из них являются квадратами любых других натуральных чисел.\n\nПри этом разработанная функция должна быть реализована 3 способами:\n-как функция, возвращающая искомое значение;\n-как функция, возвращающая искомое значение через дополнительный аргумент - указатель;\n-как функция, возвращающая искомое значение через дополнительный аргумент - ссылку.\n\nЭти три функции должны иметь одно и то же имя, т.е.должны быть перегружены.\n\n");

    int a, b, c;
    printf("Введите а: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);

    bool k;
    int count = 0;
    if (squar(a))
    {
        count++;
    }
    if (squar(b))
    {
        count++;
    }
    if (squar(c))
    {
        count++;
    }
    printf("Кол-во чисел, являющихся квадратом другого: %d\n\n",count);

    count = 0;
    squar(a, k);
    if (k)
    {
        count++;
    }
    squar(b, k);
    if (k)
    {
        count++;
    }
    squar(c, k);
    if (k)
    {
        count++;
    }
    printf("Кол-во чисел, являющихся квадратом другого: %d\n\n", count);

    count = 0;
    squar(a, &k);
    if (k)
    {
        count++;
    }
    squar(b, &k);
    if (k)
    {
        count++;
    }
    squar(c, &k);
    if (k)
    {
        count++;
    }
    printf("Кол-во чисел, являющихся квадратом другого: %d\n\n", count);

    system("pause");
}