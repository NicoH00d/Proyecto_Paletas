# Proyecto_Paletas
Este programa está diseñado para administrar la fabricación de paletas del negocio de unos Alumnos emprendedores. Este programa permitirá administrar los ingredientes para la fabricación de las paletas, fabricar la paleta, y la cantidad de paletas creadas y vendidas. Para esto, se genera una estructura de clases con Paletas, Tipos de Paletas, Ingredientes y Hielera.
## Funcionalidad
El programa permite añadir ingredientes y guardarlos en una lista. También permite fabricar paletas tomando los ingredientes de la lista y almacenarlas en la hielera, y registrar paletas vendidas.
## Consideraciones
Este es un programa realizado en c++ mediante Visual Studio code.
Este programa esta adaptado a los requisitos de la clase de Programación orientada a objetos.
Este programa esta limitado al recuento de paletas y su creación. No podrá obtener valores de costos y ganancias.

Para el correcto funcionamiento del programa, las entradas deben coincidir con lo solicitado, de lo contrario el programa no funcionará.
Para el correcto funcionamiento, ingresar únicamente una palabra en el caso de las entradas de texto.
Compilar g++ fabricacion.cpp

## Actualizaciones
### 19/05/2023
 - Creación de diagrama UML: El diagrama de clases se compone de 5 clases en este caso, la clase Paleta, Ingredientes, Hielera, Paleta_agua y Paleta_leche. La clase paleta y Hielera son una relación de agregación ya que la hielera puede tener o no paletas. Por el otro lado, la clase Paleta se compone de Ingredientes ya que son necesarios para su creación. Por último tenemos dos subclases de Paleta ya que contamos con 2 tipos de paletas, de leche y de agua, heredan atributos de paleta.
### 26/05/2023
- Creación de clases: Se crean las 5 clases presentes en el diagrama de clase priorizando la implementación de herencia, sobre carga y sobreescritura en las clases correspondientes. 
- El main únicamente implementa las funciones de las clases para comprobar su funcionamiento.
- Pendiente método mostrarPaletas en la clase Hielera.
### 30/05/2023
- Corrección de diagrama UML
### 2/06/2023
- Se implementa el polimorfismo en la clase Paleta y Paleta_a y Paleta_l.
- Se implementa el método "agregar" en la clase de Hielera para agregar paletas desde el main.
- Ahora el main demuestra el funcionamiento de hielera para almacenar paletas creadas en el heap para poder implementar polimorfismo.
### 9/6/2023
- Se convierte la clase de Paletas a clase abstracta para evitar la creación de objetos paleta.
- Se comenta la creación de objetos Paleta en el main.
### 15/6/2023
- No se encontro ningun error al compilar la entrega de implementacion de clase abstracta, verificado en asesoria.
- Se comenta el código para explicar funcionamiento.
- Se borra la clase de ingredientes debido a su funcionamiento innecesario.
- Se actualiza el diagrama UML: El diagrama de clases se compone de 4 clases, la clase Paleta, Hielera, Paleta_agua y Paleta_leche. La clase paleta y Hielera son una relación de agregación ya que la hielera puede tener o no paletas. Por el otro lado, se conservan las dos subclases de Paleta ya que contamos con 2 tipos de paletas, de leche y de agua, heredan atributos de paleta.
- Se implementa la interacción con el usuario en el main (fabricacion).
- Se actualizan los archivos finales.
