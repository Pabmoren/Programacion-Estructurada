#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#define MAX_NOMBRE 50
#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
} Estudiante;

// Declaraciones de funciones
void imprimirEstudiante(Estudiante *est);
void agregarEstudiante(Estudiante *lista, int *numEstudiantes);
void mostrarListaEstudiantes(Estudiante *lista, int numEstudiantes);
void eliminarEstudiante(Estudiante *lista, int *numEstudiantes);

#endif