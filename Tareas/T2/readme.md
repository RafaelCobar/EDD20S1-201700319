# Clase Moneda y sus Operaciones

> Se especifica la clase moneda en donde los tipos de datos son su nombre y la cantidad. 

## Descripción:

> la especifican del TDA moneda, involucra las monedas y cantidad que contendra una persona(dueño).

## Operaciones:

### - setCantidad(cantidad: entero) no devuelve nada
> * requerimientos: cantidad >= 0
> * efecto: establece la cantidad de monedas del dueño

### - getCantidad() devuelve (entero)
> * requerimientos: no requiere
> * efecto: obtiene la cantidad de monedas que contiene el dueño 

### - getNombre() devuelve (cadena)
> * requerimientos: no requiere
> * efecto: obtiene el nombre de las monedas que contiene el dueño


## - Metodos que involucra la clase "Moneda",  en la clase "Funciones"
#### - obtenerTiposDeMonedas(idEmisor: entero) devuelve (entero)
> * requerimientos: idEmisor (id del dueño) > 0
> * efecto: obtiene la opcion escogida por el emisor(dueño) para el receptor al cual se le depositara 
la moneda al dueño escogido

#### - ingresarCantidadMonedas() devuelve un entero
> * requerimientos: no requiere nada
> * efecto: el dueño debe ingresar la cantidad de monedas que quiere depositar a otra persona(receptor). 


#### - transferenciaDeMonedas(idEmisor, idReceptor, idMoneda, cantidadMoneda : enteros) no devuelve nada
> * requerimientos: idEmisor, idReceptor, idMoneda, idMoneda, cantidadMoneda > 0
> * efecto: realiza la transferencia de moneda del dueño (emisor) hacie el dueño (receptor).

#### - depositoMonedaADuenio(idReceptor, cantidadMoneda : entero, nombreMoneda: Cadena) no devuelve nada
> * requerimientos: idReceptor, cantidadMoneda > 0 && nombreMoneda no sea cadena vacia
> * efecto: acredita la cantidad de monedas al dueño receptor.

#### - crearNuevaMoneda() no devuelve nada
> * requerimientos: nombre de la moneda que se ingresara que sea diferente a la que ya estan en el sistema
> * efecto: crea una nueva moneda para mostrarla en el sistema.






