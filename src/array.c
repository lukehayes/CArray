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

void ArrayPrint(Array* array, ArrayType type)
{
    switch (type) {
        case ARR_INT:
            for (int i = 0; i <=array->capacity - 1; i++) 
            {
                printf("[%i] = %i\n", i, *(int*)&array->data[i]);
            }
            break;

        case ARR_STRING:
            for (int i = 0; i <=array->capacity - 1; i++) 
            {
                printf("[%i] = %s\n", i, (char*)&array->data[i]);
            }
            break;

        case ARR_DOUBLE:
            for (int i = 0; i <=array->capacity - 1; i++) 
            {
                printf("[%i] = %lf\n", i, *(double*)&array->data[i]);
            }
            break;

        case ARR_FLOAT:
            for (int i = 0; i <=array->capacity - 1; i++) 
            {
                printf("[%i] = %f\n", i, *(float*)&array->data[i]);
            }
            break;

        default:
            printf("INIT DEFAULT\n");
            printf("Default Array Init\n");
            break;
    }
}

