# LSP
Ejemplo de principio de sustitucion de Liskov
1. ¿Qué es?
El principio de sustitucion de Liskov nos dice que los objetos de la clase hija pueden reemplazar a los de la clase padre sin romper el funcionamiento del programa.
2. Implementación en este pequeño proyecto.
En este proyecto se crea la clase madre llamada Producto y las clases hijas llamadas Vestido y Falda. Las clases hijas se sobreponen sobre el metodo mostrarProducto() de la clase madre. En el main es donde se crean dos objetos para Vestido y Pantalon que mediante punteros utilizan el metodo de mostrarProducto().
