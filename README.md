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

### Lista doble


## Vector
