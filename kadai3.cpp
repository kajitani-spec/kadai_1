#include "kadai3.h"
#include <stdio.h>

void convert(int year) {
    if(year>=2019) {
      printf("令和%d年\n",year-2018);
    }
    else if(year>=1989) {
        printf("平成%d年\n",year-1988);
    }
    else if(year>=1926) {
        printf("昭和%d年\n",year-1925);
    }
    // TODO: 実装1887
}

void convert(const char era[], int year) {
    if (era[0] == 'R') {
        printf("%d\n",2018+year);
    }
    else if(era[0] == 'H') {
        printf("%d\n",1988+year);
    }
    else if(era[0] == 'S') {
        printf("%d\n",1925+year);
    }

    // TODO: 実装R7
}