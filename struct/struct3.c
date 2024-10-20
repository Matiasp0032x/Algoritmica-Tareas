/*Diseñar registros adecuados para representar las siguientes entidades y escribir la declaración correspondiente 
a cada uno: Un libro de la biblioteca, un producto de un supermercado, un auto, un paciente de un seguro médico, 
la ficha de asistencia de un empleado en un mes, un disco compacto de música*/

#include <stdio.h>

//Estructura para un libro de la biblioteca
struct Libro {
    char titulo[100];
    char autor[50];
    int anio_publicacion;
    char editorial[50];
    int num_paginas;
    int disponible; // 1 = disponible, 0 = no disponible
};

//Estructura para un producto de un supermercado
struct Producto {
    char nombre[50];
    float precio;
    int codigo_producto;
    int cantidad; 
    char categoria[30];
};

//Estructura para un auto
struct Auto {
    char marca[50];
    char modelo[50];
    int anio;
    char matricula[10];
    float kilometraje;
};

//Estructura para un paciente de un seguro médico
struct Paciente {
    char nombre[50];
    int edad;
    char genero[10];
    char numero_seguro[20];
    char enfermedad[100];
    char historial_medico[200];
    int id_paciente;
};

//Estructura para la ficha de asistencia de un empleado en un mes
struct AsistenciaEmp {
    char nombre_empleado[50];
    int id_empleado;
    int dias_asistidos; 
    int total_dias_mes; 
    char mes[15];
};

//Estructura para un disco compacto de música
struct Disco {
    char titulo[100];
    char artista[50];
    int anio_lanzamiento;
    char genero[30];
    int num_canciones;
    float duracion_total;
};

//Xd es aveces lq hay q hacer en los ejercicios