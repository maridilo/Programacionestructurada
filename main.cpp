#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>

using namespace std;

// Prototipos de funciones

struct Estudiante{
    char nombre[50];
    int edad;
    char sexo[10];
    char carrera[50];
    int ciclo;
    float promedio;
};

int main() {
    // Declaracion de variables
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    strcpy(estudiante1.sexo, "Masculino");
    strcpy(estudiante1.carrera, "Ingenieria");
    estudiante1.ciclo = 3;
    estudiante1.promedio = 8.5;
    // Imprimir datos del estudiante
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
        if (estudiante2 == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
        exit(EXIT_FAILURE);
     }
        strcpy(estudiante2->nombre, "Maria");
        estudiante2->edad = 21;
        estudiante2->promedio = 9.0;
        strcpy(estudiante2->sexo, "Femenino");
        strcpy(estudiante2->carrera, "Ingenieria");
        estudiante2->ciclo = 4;

        // Imprimir datos del estudiante
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    punteroEst = estudiante2;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

        printf("Nombre: %s\nEdad: %d\nSexo: %s\nCarrera: %s\nCiclo: %f\n",
               estudiante1.nombre, estudiante1.edad, estudiante1.sexo, estudiante1.carrera, estudiante1.promedio);
        printf("Nombre: %s\nEdad: %d\nSexo: %s\nCarrera: %sCiclo: %f\n",
               estudiante2->nombre, estudiante2->edad, estudiante2->sexo);

        free(estudiante2);

        union Dato {
            int i;
            float f;
            char str[20];
        };

        union Dato dato;

        dato.i = 10;
        printf("dato.i: %d\n", dato.i);

        dato.f = 220.5;
        printf("dato.f: %.2f\n", dato.f);

        strcpy(dato.str, "C programming");
        printf("dato.str: %s\n", dato.str);


        return 0;
    }

void imprimirEstudiantePorDireccion(Estudiante *est) {
    printf("Imprimir Estudiante por direccion: Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

void imprimirEstudiantePorReferencia(Estudiante &est) {
    printf("Imprimir Estudiante por referencia: Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}