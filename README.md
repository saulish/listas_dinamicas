# listas_dinamicas
Dentro de este repositorio se encuentran las listas dinamicas realizadas dentro de la materia de estructura de datos, entre ellas se encuentra la liosta simple, doble así como una version de la clase vector, usada dentro del repositorio de "vector y platillo"<br>
## Listas
Para comenzar, estas listas usan la clase __lista_s__ para la simple y __lista_d__ para la doble, mas ambas serán explicadas en sus apartados. Pero, dentro de estas 2 existen algunos puntos que son iguales, por lo que serán explicados aqui al ser compartidos.<br>
* __Template__ <br>
El template (plantilla) usada es llamada *objeto*, el uso de esta se debe a que la lista funcionara como la liberia vector en la que somos capaces de guardar cualquier tiepo de dato, sea un dato basico como un entero hasta un complejo como un objeto.
* __Nodo__ <br>
El *nodo* se trata de un struct el cual sera el encargado de almacenar tanto los punteros como el dato u objeto a almacenar. Crea un dato de tipo objeto, siendo este de la plantilla, asi como los punteros de tipo nodo, siendo estos *next*, *prev*, *head* y *tail*, siendo estos muy importantes para el funcionamiento de la lista, al menos el prev no para la lista simple, pero dentro de *head* se reservará siempre la direccion del primer nodo de la lista, del cual *next* sera el siguiente (obvis bobis), *prev* el anterior en el caso de la lista doble (obvis obvis bobis), y *tail* se tratara de la direccion del ultimo nodo en la lista.<br> Asi como tambien cuenta con su constructor de copia y movimiento.<br>
Por su parte, tambien cuenta con las variables de *tamaño* y *capacidad*, siendo el *tamaño* el que dicta cuantos nodos existen, mientras que la *capcidad* es el limite puesto para que el programa evite guardar datos a un punto en que la capacidad fisica de la RAM se termine.

* __Constructores, destructor y sobrecarga__ <br>
Dentro de los constructores que comparten, estan el de copia y movimiento, que se encarga de declarar los punteros como *nullptr* asi como el *tamaño* en 0 y la *capcidad* a 10000.<br>
El destructor por mas que no se encuentra en la simple (deberia estarlo xd), consiste en crear un nuevo nodo, el cual sera declarado con los datos de *head*, para despues iterar hasta que el *next* de *head* sea igual a *nullptr*, por ende sea el ultimo, asi como ir borrando con cada iteracion y que *head* avance. Una vez eliminados los nodos del centro, seran declarados *head* y *tail* como *nullptr* para despues ser eliminados ambos.<br>
Por otro lado, existe la sobrecarga del operador [] el cual nos permite seleccionar un elemento en especifico, el operador = que consiste en hacer que un nodo sea igual a otro, o en caso de que ya sean el mismo simplemnte devolverlos.

### Lista simple
Una vez explicado todo lo anterior, la lista simple contiene practicamente nada mas a explicar, mas que esta no contiene aun metodos para ingresar datos dentro de ella, tales como un push, o un peek para tomar datos. (porque? no se)<br>
### Lista doble
Mientras que por otro lado, la lista doble cuenta con todo lo antes mencionado, mas todos los metodos necesarios, siendo *push*, *peek* y *delete*. Estos 3 metodos tienen 3 versiones de cada uno, siendo *front*, *back* y *position*, los cuales indican con que elemento estaremos trabajando, siendo el frente, el final y una posicion, que en los 3 casos funciona propocionandole el dato a ingresar asi como la posicion deseada.
De igual forma, tambien los metodos de push cuentan con su version de copia y referencia, para el caso del uso de los L y R valores.
* __Push__ <br>
Los metodos de push consisten en ingresar valores a la lista.
* __Peek__ <br>
Los metodos peek sirven para tomar valores de la lista. Este en especifico cuenta con varias versiones como *peek_td* que se trata de tomar e imprimir todo, aunque estos por lo general no son usados.
* __Delete__ <br>
Y para terminar los metodos delete se encargan de borrar un elemento de la lista, asi como organizar los punteros para que la lista no se pierda.

La lista doble cuentan tambien con algunos metodos situacionales como *llena* la cual se encarga de verificar si el tamanño es igual a la capacidad, *vacia* que se encarga de verificar si existe algun dato dentro de la lista verificando el tamaño, tambien cuenta con el metodo *r_tamanio* el cual se encarga de regresar el tamaño actual de la lista, la funcion *validacion* se encarga de tomar tomar el valor recibido el cual se trata de la posicion ingresada para los casos de *peek*, *push* y *delete* y se encarga de verificar que este numero se trate de una posicion valida. Y por ultimo, cuenta con una sobrecarga para el operador *<<* la cual ayuda a imprimir la lista completa con un simple *cout*.<br>

## Vector











