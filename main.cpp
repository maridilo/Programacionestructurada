#include<iostream>
#include<string>

using namespace std;

struct Estudiante{
    char nombre[50];
    int edad;
    char sexo[10];
    char carrera[50];
    int ciclo;
    float promedio;
};

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    strcpy(estudiante1.sexo, "Masculino");
    strcpy(estudiante1.carrera, "Ingenieria");
    estudiante1.ciclo = 3;
    estudiante1.promedio = 8.5;

    printf("Nombre: %s\nEdad: %d\nSexo: %s\nCarrera: %s\nCiclo: %f\n",
           estudiante1.nombre, estudiante1.edad, estudiante1.sexo, estudiante1.carrera, estudiante.promedio);

    return 0;
}


