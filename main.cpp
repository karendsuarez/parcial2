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
        std::cin.ignore();

        switch (opcion) {
            case 1:
                std::string nombre, documento, edadStr, code;
                int edad;

                std::cout << " Ingrese el nombre del usuario: ";
                std::getline(std::cin, nombre);
                std::cout << " Ingrese documento del usuario: ";
                std::getline(std::cin, documento);
                std::cout << " Ingrese edad del usuario: ";
                std::getline(std::cin, code);

                if (!esNumerico(edadStr) || std::stoi(edadStr) <= 0) {
                    std::cout << "Error: La edad debe ser mayor a 0"<< std::endl;
                    break;
                }
                edad = std::stoi(edadStr);

                std::cout << "Ingrese código del usuario: ";
                std::getline(std::cin, codigo);
                if (!esNumerico(codigo)) {
                    std::cout << "Error: El codigo no debe llevar caracteres de texto."<< std::endl;
                    break;
                }

                listaUsuarios.push_back(Usuario(nombre, documento, edad, codigo));
                std::cout << "¡Usuario registrado con exito!"<< std::endl;
                break;
            }

                break;
            case 2:
                std::cout << " Ingrese el nombre del bibliotecario: ";
                std::getline(std::cin, nombre);
                std::cout << " Ingrese documento del bibliotecario: ";
                std::getline(std::cin, documento);
                std::cout << " Ingrese edad del bibliotecario: ";
                std::getline(std::cin, edadStr);

                if (!esNumerico(edadStr) || std::stoi(edadStr) <= 0) {
                    std::cout << "Error: La edad debe ser mayor a 0"<<std::endl;
                    break;
                }
                edad = std::stoi(edadStr);

                std::cout << "Ingrese codigo de empleado: ";
                std::getline(std::cin, codigo);
                if (!esNumerico(codigo)) {
                    std::cout << "Error: El codigo no debe llevar caracteres de texto."<<std::endl;
                    break;
                }

                std::cout << "Ingrese salario del bibliotecario: ";
                std::cin >> salario;

                listaBibliotecarios.push_back(Bibliotecario(nombre, documento, edad, codigo, salario));
                std::cout << "Bibliotecario registrado con exito"<<std::endl;
                break;

                break;
            case 3:
                std::string titulo, autor, codeLibro;

                std::cout << " Ingrese el titulo del libro: ";
                std::getline(std::cin, titulo);
                std::cout << " Ingrese el autor del libro: ";
                std::getline(std::cin, autor);
                std::cout << "Ingrese el código del libro: ";
                std::getline(std::cin, codigoLibro);

                if (!esNumerico(codigoLibro)) {
                    std::cout << "Error: El codigoLibro no debe llevar caracteres de texto" <<std::endl;
                    break;
                }

                listaLibros.push_back(Libro(titulo, autor, codigoLibro));
                std::cout << "Libro registrado con exito!\n";
                

                break;
            case 4:
                std::string codeLibro; 
                std::cout << "Ingrese el código del libro a prestar: ";
                std::getline(std::cin, codeLibro);

                bool encontrado = false;
                for (size_t i = 0; i < listaLibros.size(); i++) {
                    //compara el codigo del libro guardado con lo que escribio el usuario
                    if (listaLibros[i].getCodeLibro() == codeLibro) { 
                        encontrado = true;
                        if (listaLibros[i].getDisponible()) {
                            listaLibros[i].prestarLibro();
                            std::cout << "El libro '" << listaLibros[i].getTitulo() << "' ha sido prestado con éxito.\n";
                        } else {
                           std::cout << "Error: El libro NO está disponible en este momento.\n";
                        }
                        break;
                    }
                }
                if (!encontrado) std::cout << "Libro no encontrado.\n";

                break;
            case 5:
              std::string codeLibro; // <-- Variable local para buscar
                std::cout << "Ingrese el código del libro a devolver: ";
                std::getline(std::cin, codeLibro);

                bool encontrado = false;
                for (size_t i = 0; i < listaLibros.size(); i++) {
                    if (listaLibros[i].getCodeLibro() == codeLibro) { 
                        encontrado = true;
                        if (!listaLibros[i].getDisponible()) {
                            listaLibros[i].devolverLibro();
                            std::cout << "El libro '" << listaLibros[i].getTitulo() << "' ha sido devuelto.\n";
                        } else {
                            std::cout << "El libro ya se encontraba disponible.\n";
                        }
                        break;
                    }
                }
                if (!encontrado) std::cout << "Libro no encontrado.\n";
                break;
            case 6:
                std::cout << "--- LISTA DE USUARIOS ---" << std::endl;
                if (listaUsuarios.empty()) std::cout << "No hay usuarios registrados." << std::endl;
                for (size_t i = 0; i < listaUsuarios.size(); i++) {
                listaUsuarios[i].mostrarRol();
                listaUsuarios[i].mostrarInformacion();
}
                break;
            case 7:
                std::cout << "--- LISTA DE LIBROS ---" << std::endl;
                if (listaLibros.empty()) std::cout << "No hay libros registrados." << std::endl;
                for (size_t i = 0; i < listaLibros.size(); i++) {
                listaLibros[i].mostrarInformacion();
}
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