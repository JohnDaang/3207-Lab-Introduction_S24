#include <time.h>

char randchar() {
    srand(time(NULL));
    return 'A' + (rand() % ('Z' - 'A' + 1));
}