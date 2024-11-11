#include "array.h"

#include <stdlib.h>

Array* ArrayCreate(size_t initial_size)
{
    Array* array = malloc(sizeof(Array));

    array->capacity = initial_size;
    array->size = 0;

    return array;
}

void ArrayDestroy(Array* array)
{
    free(array->data);
    array->data = NULL;

    free(array);
    array = NULL;
}

