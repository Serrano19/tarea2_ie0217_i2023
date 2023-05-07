## Manejo de excepciones

En este archivo se explica como ejecutar los archivos de manejo de excepciones, como el previamente heredado y los tres ejemplos de excepciones investigadas.

## Como utilizar los códigos

# 1. En el caso de la ejecución de MyException:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make Main
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make Main
```

Con este comando se compilan los archivos necesarios para ver la implementación MyException y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ MyException.cpp main.cpp -o .\build\main
```

```bash
.\build\main
```

# 2. En el caso de la ejecución del primer ejemplo de excepción que es out_of_range:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion1
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make DisparoExcepcion1
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepción del tipo out_of_range y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion1.cpp -o .\build\DisparoExcepcion1
```

```bash
.\build\DisparoExcepcion1
```

# 3. En el caso de la ejecucion del segundo ejemplo de excepción que es runtime_error:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion2
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make DisparoExcepcion2
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepción del tipo runtime_error y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion2.cpp -o .\build\DisparoExcepcion2
```

```bash
.\build\DisparoExcepcion2
```

# 4. En el caso de la ejecución del tercer ejemplo de excepción que es domain_error:

1. Ubicado en la carpeta de Excepciones, ejecute el siguiente comando:

```bash
make DisparoExcepcion3
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make DisparoExcepcion3
```

Con este comando se compila el archivo .cpp para el ejemplo de disparo de una excepción del tipo domain_error y seguidamente ejecuta el archivo creado en la carpeta build.

2. En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ DisparoExcepcion3.cpp -o .\build\DisparoExcepcion3
```

```bash
.\build\DisparoExcepcion3
```

# 5. Eliminar los ejecutables de la carpeta build:

1. Para eliminar los ejecutables creados durante la compilación y ejecución de los programas, debe estar ubicado en la carpeta Excepciones y ejecutar el sigiente comando:

```bash
make clean
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make clean
```

2. En caso de fallar en Makefile creado, ejecutar el siguiente comando:

```bash
rm .\build\*
```

Con esto se eliminan los archivos ejecutables de la carpeta build.




# Nota:
El código fue realizado en windows, se trata de generalizar la ejecución de los archivos en la tarea.
Puede ser necesario agregar el .exe o el .o en la creación de los ejecutables.