/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/**
 * @file DisparoExcepcion2.cpp
 * @brief Ejemplo de manejo de excepciones utilizando std::runtime_error.
*/

#include <iostream>
#include <fstream>

/**
 * @brief Función principal del programa.
 * @return Devuelve el valor 0 si la ejecución fue exitosa.
*/
int main() {

    try {
        std::ifstream file("archivo_que_no_existe.txt"); /** Apertura de un archivo inexistente en modo lectura.*/
        if (!file) { /** Se verifica si el archivo se abrió correctamente.*/
            throw std::runtime_error("No se pudo abrir el archivo"); /** Se lanza la excepción std::runtime_error.*/
        }
    } catch (const std::runtime_error& e) { /** Se captura la excepción std::runtime_error.*/
        std::cout << "Error: " << e.what() << std::endl; /** Impresión del mensaje de error.*/
    }

    return 0;
}