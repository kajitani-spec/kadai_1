#include "kadai3.h"
#include <stdio.h>

void convert(int year) {
    if(year>=2019) {
      printf("R%d\n",year-2018);
    }
    else if(year>=1989) {
        printf("H%d\n",year-1988);
    }
    else if(year>=1926) {
        printf("S%d\n",year-1925);
    }
    // TODO: 実装1887
}

void convert(const char era[], int year) {
    if (era[0] == 'R') {
        printf("R%d\n",year);
    }
    else if(era[0] == 'H') {
        printf("H%d\n",year);
    }
    else if(era[0] == 'S') {
        printf("S%d\n",year);
    }

    // TODO: 実装R7
}