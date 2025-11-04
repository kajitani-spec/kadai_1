#include "kadai4.h"

#include <stdio.h>

void drawTree(int h) {
    for(int i=0;i<h;i++) {
        for(int j=i;j<=h;j++) {
            printf(" ");
        }
        for(int j=0;j<(i*2)+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    // TODO: 実装
}
