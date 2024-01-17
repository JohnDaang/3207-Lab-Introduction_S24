#include <time.h>
#include <stdlib.h>
#include "random.h"

char randchar() {
    return 'A' + (rand() % ('Z' - 'A' + 1));
}