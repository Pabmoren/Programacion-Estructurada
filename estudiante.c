#include <stdio.h>
#include <string.h>
#include "estudiante.h"

void imprimirEstudiante(Estudiante *est) {
    if (est != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               est->nombre, est->edad, est->promedio);
    }
}

void agregarEstudiante(Estudiante *lista, int *numEstudiantes) {
    if (*numEstudiantes >= MAX_ESTUDIANTES) {
        printf("La lista está llena. No se puede agregar más estudiantes.\n");
        return;
    }

    Estudiante nuevoEstudiante;
    printf("Ingrese nombre del estudiante: ");
    scanf("%49s", nuevoEstudiante.nombre);

    printf("Ingrese edad: ");
    scanf("%d", &nuevoEstudiante.edad);

    printf("Ingrese promedio: ");
    scanf("%f", &nuevoEstudiante.promedio);

    lista[*numEstudiantes] = nuevoEstudiante;
    (*numEstudiantes)++;
    printf("Estudiante agregado exitosamente.\n");
}

void mostrarListaEstudiantes(Estudiante *lista, int numEstudiantes) {
    if (numEstudiantes == 0) {
        printf("No hay estudiantes en la lista.\n");
        return;
    }

    int i = 0;
    while (i < numEstudiantes) {
        printf("Estudiante %d: ", i + 1);
        imprimirEstudiante(&lista[i]);
        i++;
    }
}

void eliminarEstudiante(Estudiante *lista, int *numEstudiantes) {
    if (*numEstudiantes == 0) {
        printf("No hay estudiantes para eliminar.\n");
        return;
    }

    int indice;
    printf("Ingrese el número de estudiante a eliminar (1-%d): ", *numEstudiantes);
    scanf("%d", &indice);

    if (indice < 1 || indice > *numEstudiantes) {
        printf("Número de estudiante inválido.\n");
        return;
    }

    // Desplazar elementos para eliminar el estudiante
    int i = indice - 1;
    while (i < *numEstudiantes - 1) {
        lista[i] = lista[i + 1];
        i++;
    }

    (*numEstudiantes)--;
    printf("Estudiante eliminado exitosamente.\n");
}