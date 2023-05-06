## Verificación de includes:

Todos los includes en el código del archivo stackTemplate son necesarios.

1. iostream: es necesario para imprimir la salida en la consola (std::cout, std::cerr).
2. vector: se utiliza para implementar la estructura de datos de la pila.
3. algorithm: es necesario para utilizar la función std::for_each.
4. stdexcept: es necesario para lanzar la excepción std::out_of_range en la función pop.
5. functional: se utiliza para proporcionar el tipo de datos std::function, que se utiliza para pasar una función como argumento en el método foreach.


# Como usar el códigos:

Se realiza la implementación del código stackTemplate, donde se agrega una nueva instancia donde se utiliza el yemplate pero con otro tipo de datos, en ese caso con datos tipo string.

# 1. Para probar el código con la nueva implementación siga los pasos a continuación:

1. Ubicado en la carpeta de Templates, ejecute el siguiente comando:

```bash
make stackTemplate
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make stackTemplate
```

Con este comando se compilan los archivos necesarios para ver la implementacion del template y seguidamente se ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ stackTemplate.cpp -o .\build\stackTemplate
```

```bash
.\build\stackTemplate
```

3. Eliminar los ejecutables de la carpeta build:

Para eliminar los ejecutables creados durante la compilacion y ejecucion de los programas, debe estar ubicado en la carpeta Algoritmos y ejecutar el sigiente comando:

```bash
make clean
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make clean
```

En caso de fallar en Makefile creado, ejecutar el siguiente comando:

```bash
rm .\build\*
```

Con esto se eliminan los archivos ejecutables de la carpeta build.




# Nota:
El código fue realizado en windwos, se trata de generalizar la ejecución de los archivos en la tarea.
Puede ser necesario agregar el .o o el .exe en los ejecutables.