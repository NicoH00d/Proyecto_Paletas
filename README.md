# Proyecto_Paletas
Este programa está diseñado para administrar la fabricación de paletas del negocio de unos Alumnos emprendedores. Este programa permitirá administrar los ingredientes para la fabricación de las paletas, fabricar la paleta, y la cantidad de paletas creadas y vendidas. Para esto, se genera una estructura de clases con Paletas, Tipos de Paletas, Ingredientes y Hielera.
## Funcionalidad
El programa permite añadir ingredientes y guardarlos en una lista. También permite fabricar paletas tomando los ingredientes de la lista y almacenarlas en la hielera, y registrar paletas vendidas.
## Consideraciones
Este es un programa realizado en c++ mediante Visual Studio code.
Este programa esta limitado al recuento de paletas y su creación. No podra obtener valores de costos y ganancias.
Para el correcto funcionamiento del programa, las entradas deben coincidir con el tipo de dato de la variable, de lo contrario el programa no funcionará.

## Actualizaciones
### 19/05/2023
 - Creación de diagrama UML: El diagrama de clases se compone de 5 clases en este caso, la clase Paleta, Ingredientes, Hielera, Paleta_agua y Paleta_leche. La clase paleta y Hielera son una relación de agregación ya que la hielera puede tener o no paletas. Por el otro lado, la clase Paleta se compone de Ingredientes ya que son necesarios para su creación. Por último tenemos dos subclases de Paleta ya que contamos con 2 tipos de paletas, de leche y de agua.