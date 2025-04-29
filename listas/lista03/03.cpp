#include <iostream>

void conta_impares(int a[], int n, int impares[], int &qtd_impares)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            impares[qtd_impares] = a[i];
            qtd_impares += 1;
        }
    }
}

void conta_pares(int a[], int n, int pares[], int &qtd_pares)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            pares[qtd_pares] = a[i];
            qtd_pares += 1;
        }
    }
}

void conta_positivos(int a[], int n, int positivos[], int &qtd_positivos)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positivos[qtd_positivos] = a[i];
            qtd_positivos += 1;
        }
    }
}

void conta_negativos(int a[], int n, int negativos[], int &qtd_negativos)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negativos[qtd_negativos] = a[i];
            qtd_negativos += 1;
        }
    }
}

int main()
{
    int n, qtd_impares = 0, qtd_pares = 0, qtd_positivos = 0, qtd_negativos = 0;
    std::cin >> n;
    int a[n], impares[n], pares[n], positivos[n], negativos[n]; // A quantidade máxima é n
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    conta_impares(a, n, impares, qtd_impares);
    conta_pares(a, n, pares, qtd_pares);
    conta_positivos(a, n, positivos, qtd_positivos);
    conta_negativos(a, n, negativos, qtd_negativos);
    std::cout << "\nÍmpares: " << qtd_impares << std::endl;
    if (qtd_impares > 0)
    {
        std::cout << impares[0];
        for (int i = 1; i < qtd_impares; i++)
        {
            std::cout << " " << impares[i];
        }
    }
    std::cout << std::endl;
    std::cout << "\nPares: " << qtd_pares << std::endl;
    if (qtd_pares > 0)
    {
        std::cout << pares[0];
        for (int i = 1; i < qtd_pares; i++)
        {
            std::cout << " " << pares[i];
        }
    }
    std::cout << std::endl;
    std::cout << "\nPositivos: " << qtd_positivos << std::endl;
    if (qtd_positivos > 0)
    {
        std::cout << positivos[0];
        for (int i = 1; i < qtd_positivos; i++)
        {
            std::cout << " " << positivos[i];
        }
    }
    std::cout << std::endl;
    std::cout << "\nNegativos: " << qtd_negativos << std::endl;
    if (qtd_positivos > 0)
    {
        std::cout << negativos[0];
        for (int i = 1; i < qtd_negativos; i++)
        {
            std::cout << " " << negativos[i];
        }
    }
    std::cout << std::endl;
    return 0;
}