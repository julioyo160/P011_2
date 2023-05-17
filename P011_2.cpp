// P011_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>
#include <cmath>
#include <stdlib.h>

int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << " \tBienvenido al Adivina Quien de God of War\n " << std::endl;
        std::cout << " Tu personaje es un dios? 1)Si 2)No\n ";
        std::cin >> aux;

        if (aux == true)
        {
            std::cout << " Tu dios es hombre???\n ";
            std::cin >> aux;
            if (aux == true)
            {
                std::cout << " Tu dios lanza rayos???\n ";
                std::cin >> aux;
                if (aux == true)
                {
                    std::cout << " Tu personaje es.... Zeus\n ";
                }
                else
                {
                    std::cout << " Tu personaje es.... es Poseidon\n ";
                }
            }
            else
            {
                std::cout << " Tu personaje es.... Atenea\n ";
            }
        }
        else
        {
            std::cout << " Tu personaje es hombre???\n ";
            std::cin >> aux;
            if (aux == true)
            {
                std::cout << " Tu personaje tiene las espadas del caos???\n ";
                std::cin >> aux;
                if (aux == true)
                {
                    std::cout << " Tu personaje es.... Kratos\n ";
                }
                else
                {
                    std::cout << " Tu personaje es.... Hades\n ";
                }
            }
            else
            {
                std::cout << " Tu personaje es.... Hera\n ";
            }
        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
