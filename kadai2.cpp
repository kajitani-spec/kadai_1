#include "kadai2.h"
#include <ctype.h>
#include <stdio.h>

double bmi(double height_m, double weight) {
    float bmi;
    printf("BMIを小数点以下２桁で出力してください\n");
    scanf("%f", &height_m);
    scanf("%f", &weight);
    bmi = weight/(height_m*height_m);
    printf("%f\n",bmi);
    return 0.0;
}