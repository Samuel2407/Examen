#include <stdio.h>

int main (){

    //Pedir materias
    int asig;
    printf("Ingrese numero de asignaturas\n");
    scanf("%d", &asig);
    int Lista[asig];

    //Ingresar calificaciones
    for (int i = 0; i < asig; i++)
    {
        printf("Calificacion materia %d:", i+1);
        scanf("%d", &Lista[i]);
    }
    
    //Calcular promedio
    int suma = 0;
    for (int i = 0; i < asig; i++) {
        suma += Lista[i];
    }
    int prom = suma / asig;

    //Asignar letras

    char letra;
    if (prom >= 9) 
    {
        letra = 'A';
    } 
    else if (prom >= 8) 
    {
        letra = 'B';
    } 
    else if (prom >= 7) 
    {
        letra = 'C';
    } 
    else if (prom >= 6) 
    {
        letra = 'D';
    } 
    else
    {
        letra = 'F';
    }

    // Imprimir el promedio y la letra asignada
    printf("El promedio de las calificaciones es: %d\n", prom);
    printf("La letra asignada es: %c\n", letra);

    return 0;

    

}