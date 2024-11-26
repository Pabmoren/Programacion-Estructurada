#include <stdio.h>
#include "estudiante.h"

int main() {
    Estudiante listaEstudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;
    int opcion;

    while (1) {
        printf("\n--- Sistema de Gestión de Estudiantes ---\n");
        printf("1. Agregar Estudiante\n");
        printf("2. Mostrar Lista de Estudiantes\n");
        printf("3. Eliminar Estudiante\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarEstudiante(listaEstudiantes, &numEstudiantes);
            break;
            case 2:
                mostrarListaEstudiantes(listaEstudiantes, numEstudiantes);
            break;
            case 3:
                eliminarEstudiante(listaEstudiantes, &numEstudiantes);
            break;
            case 4:
                printf("Saliendo del programa.\n");
            return 0;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    }
}