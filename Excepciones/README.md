## Manejo de excepciones

En este archivo se explica como ejecutar los archivos de manejo de excepciones, desde el previamente heredado como los tres ejemplos e las excepciones investigadas.

## Como utilizar los codigos

# 1. En el caso de la ejecucion de MyException:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make Main
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make Main
```

Con este comando se compilan los archivos necesarios para ver la implementacion MyException y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ MyException.cpp main.cpp -o .\build\main
```

```bash
.\build\main
```

# 2. En el caso de la ejecucion del primer ejemplo de excepcion que es out_of_range:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion1
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make MaDisparoExcepcion1
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepcion del tipo out_of_range y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion1.cpp -o .\build\DisparoExcepcion1
```

```bash
.\build\DisparoExcepcion1
```

# 3. En el caso de la ejecucion del primer ejemplo de excepcion que es runtime_error:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion2
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make MaDisparoExcepcion2
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepcion del tipo runtime_error y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion2.cpp -o .\build\DisparoExcepcion2
```

```bash
.\build\DisparoExcepcion2
```

# 4. En el caso de la ejecucion del primer ejemplo de excepcion que es domain_error:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion3
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make MaDisparoExcepcion3
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepcion del tipo domain_error y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion3.cpp -o .\build\DisparoExcepcion3
```

```bash
.\build\DisparoExcepcion3
```

# 5. Eliminar los ejecutables de la carpeta build:

Para eliminar los ejecutables creados durante la compilacion y ejecucion de los programas, debe estar ubicado en la carpeta Excepciones y ejecutar el sigiente comando:

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
El código fue realizado en windows, se trata de generalizar la ejecución de los archivos en la tarea.
Puede ser necesario agregar el .o o el .exe en los ejecutables.