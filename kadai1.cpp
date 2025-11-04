#include "kadai1.h"

char grade(int score) {

    if (score <= 100) {
        if (score <= 20) {
            return 'F';
        }
        else if (score <= 40) {
            return 'D';
        }
        else if (score <= 60) {
            return 'C';
        }
        else if (score <= 80) {
            return 'B';
        }
        else if (score <= 100) {
            return 'A';
        }
    }

    return 'F';
}