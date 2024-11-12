#include "array.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void* _ArrayInit(Array* array, ArrayType type)
{
    void* data;

    switch (type) {
        case ARR_INT:
            printf("INIT INT\n");
            array->type = type;
            data = malloc(sizeof(int) * array->capacity);
            memset(data, 0, sizeof(int) * array->capacity);
            break;

        case ARR_STRING:
            printf("INIT STRING\n");
            array->type = type;
            data = malloc(sizeof(char) * array->capacity);
            memset(data, '\0', 1);
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
    array->type = type;

    array->data = malloc(sizeof(int) * array->capacity - 1);
    memcpy(array->data, array->data, sizeof(int) * initial_size);

    int* p1 = &array->data[0];

    *p1 = 567;
    
    printf("Data p1 %i \n", *p1);

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

        default:
            printf("INIT DEFAULT\n");
            printf("Default Array Init\n");
            break;
    }
}

