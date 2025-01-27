#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    FloatVector *vec = create(10);

    imprime(vec);

    append(vec, 0.0);
    append(vec, 1.1);
    append(vec, 0.0);

    imprime(vec);

    destroy(&vec);
}