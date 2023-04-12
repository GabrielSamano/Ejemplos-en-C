#include <stdio.h>

#include <unistd.h>

int n,i;                             // Variables para la entrda del usuario
float prom,cal,calMax,calMin;        // Variables para obtener el promedio y calificaciones de los alumnos

int main()
{
    printf("Dame el numero de los alumnos: \n");    // Entrada del usuario
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Ingresa la calificacion de los alumnos %d:",i+1);   // Se ingresan las calificaciones 
        scanf("%f", &cal);

        prom=prom+cal;

        if (i == 0){calMax=cal;calMin=cal;}

        if (cal > calMax)        // Determinar la calificacion mas alta
            calMax=cal;
        if (cal < calMin)        // Determinar la calificacion mas baja
            calMin=cal;

    }
    
    prom = prom / n;             // Calculando el promedio de las calificaciones
    printf("Promedio: %.2f\n",prom);
    printf("Calificacion Mayor: %.2f\n",calMax);
    printf("Calificacion Menor: %.2f\n",calMin);
    
    

}
