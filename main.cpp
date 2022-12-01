/* Calcular la cantidad de segundos que estan incluidos en el numero de horas,
 * minutos, y segundos ingresados por el usuario */
#include <iostream>
#include <stdio.h>

int main() {
    double horas, minutos, segundos, t1, t2, t3, total;

    printf("Digite el numero de horas: \n");
    scanf("%lf", &horas);
    printf("Digite el numero de minutos: \n");
    scanf("%lf", &minutos);
    printf("Digite el numero de segundos: \n");
    scanf("%lf", &segundos);

    t1 = horas*60*60;
    t2 = minutos*60;
    t3 = segundos*1;
    total= t1 + t2 + t3;

    printf("Su numero total de segundos es: %lf", total);


    return 0;
}
