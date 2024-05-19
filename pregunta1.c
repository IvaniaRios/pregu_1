#include <stdio.h>

// Función de suma utilizando punteros
float suma(float *num1, float *num2) {
    return *num1 + *num2;
}

// Función de resta utilizando punteros
float resta(float *num1, float *num2) {
    return *num1 - *num2;
}

// Función de multiplicación utilizando punteros (basada en sumas)
float multiplicacion(float *num1, float *num2) {
    float resultado = 0;
    for (int i = 0; i < *num2; i++) {
        resultado += *num1;
    }
    return resultado;
}

float division(float *num1, float *num2) {
    float resultado = 0;
    float residuo = *num1;

    while (residuo >= *num2) {
        resultado++;
        residuo =residuo- *num2;
    }

    // Ajustamos el resultado para incluir los decimales
    if (residuo > 0) {
        resultado += residuo / *num2;
    }

    return resultado;
}


int main() {
    float a ;
    float b;
    printf("Ingrese un numero: ");
       scanf("%f",&a);
     printf("Ingrese un numero: ");
     scanf("%f",&b);
    printf("Suma: %.1f\n", suma(&a, &b));
    printf("Resta: %.1f\n", resta(&a, &b));
    printf("Multiplicacion: %.1f\n", multiplicacion(&a, &b));
    printf("Division: %.5f\n", division(&a, &b));
    return 0;
}
