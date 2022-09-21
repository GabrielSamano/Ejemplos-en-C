
// Instruccion switch nos sirve para seleccionar uno de los muchos bloques de codigo 

int main() {
    int day = 7;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    return 0;
}


// La salida seria "Sunday ya que seleccionamos el dia 7 y este corresponde a sunday"