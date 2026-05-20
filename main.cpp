#include <iostream>
#include <string>
#include "Persona.h"
#include "Usuario.h"
#include "Bibliotecario.h"
#include "Libro.h"


int main() {

    int opcion;


    std::cout << "          Bienvenido al sistema de biblioteca" << std::endl << std::endl;

    do{

        std::cout << "1. Registrar usuario" << std::endl;
        std::cout<< "2. Registrar bibliotecario" << std::endl;
        std::cout << "3. Registrar libro" << std::endl;
        std::cout << "4. Prestar libro" << std::endl;
        std::cout << "5. Devolver libro" << std::endl;
        std::cout << "6. Mostrar usuarios" << std::endl;
        std::cout << "7. Mostrar libros" << std::endl;
        std::cout << "8. Salir" << std::endl;

        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << " Ingrese el nombre del usuario: ";
                 std::cout << " Ingrese documento del usuario: ";
                std::cout << " Ingrese edad del usuario: ";
                break;
            case 2:
                std::cout << " Ingrese el nombre del bibliotecario: ";
                std::cout << " Ingrese documento del bibliotecario: ";
                std::cout << " Ingrese edad del bibliotecario: ";
                break;
            case 3:
                std::cout << " Ingrese el titulo del libro: ";
                std::cout << " Ingrese el autor del libro: ";
                break;
            case 4:
                // Lógica para prestar libro
                break;
            case 5:
                // Lógica para devolver libro
                break;
            case 6:
                // Lógica para mostrar usuarios
                break;
            case 7:
                // Lógica para mostrar libros
                break;
            case 8:
                std::cout << "Saliendo del sistema..." << std::endl;
                break;
            default:
                std::cout << "Opcion invalida. Por favor, intente de nuevo." << std::endl;
        }

    } while (opcion != 8);
    


 

    return 0;

}