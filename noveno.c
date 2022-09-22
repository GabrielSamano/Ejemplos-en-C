
// Arrays en C

int main() {
    int Mylist[] = {20,15,4,3,18,30};

    printf("%i\n", Mylist[2]); // Imprimira el valor de 4 ya que en C el primer elemento se considera 0
    
    Mylist[0] = 2; // se cambia el valor del primer elemento

    printf("%i\n", Mylist[0]); // ENtonces en lugar de imprimir 20 sera 2 ya que se cambio 

    // Creamos un bucle en el array
    int i;
    for (i = 0; i < 4; i ++){
        printf("%i\n", Mylist[i]);
    }
    return 0;
}
