#include "array.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void* _ArrayInit(size_t size, ArrayType type)
{
    void* data;

    switch (type) {
        case ARR_INT:
            printf("INIT INT\n");
            data = malloc(sizeof(int) * size);
            memset(data, 1, sizeof(int) * size);
            break;

        case ARR_STRING:
            printf("INIT STRING\n");
            data = malloc(sizeof(char) * size);
            memset(data, '\0', 1);
            break;

        case ARR_DOUBLE:
            printf("INIT DOUBLE\n");
            data = malloc(sizeof(double) * size);
            break;

        case ARR_FLOAT:
            printf("INIT FLOAT\n");
            data = malloc(sizeof(float) * size);
            break;

        default:
            printf("INIT DEFAULT\n");
            printf("Default Array Init\n");
            break;
    }

    return data;
}


Array* ArrayCreate(size_t initial_size, ArrayType type)
{
    Array* array = malloc(sizeof(Array));

    array->capacity = initial_size;
    array->size = 0;

    array->data = _ArrayInit(initial_size, type);

    return array;
}

void ArrayDestroy(Array* array)
{
    free(array->data);
    array->data = NULL;

    free(array);
    array = NULL;
}

