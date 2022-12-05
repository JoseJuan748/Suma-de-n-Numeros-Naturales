// 22_11_27_P019_Suma_n_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>

int suma(int numero, int mas, int contador)
{
    if (++contador <= numero)
        return suma(numero, mas + contador, contador);
    else
        return mas;
}

int main()
{
    int numero;

    std::cout << "Introduzca el numero:";
    std::cin >> numero;
    std::cout << "\nLa suma es: " << suma(numero, 0, 0) << std::endl;
    system("pause");
    system("cls");

    return main();
}


