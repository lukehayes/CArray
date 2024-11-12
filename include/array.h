#ifndef C_ARRAY_H
#define C_ARRAY_H

#include <stddef.h>

#define ARRAY_INIT_SIZE 10

typedef enum ArrayType
{
    ARR_INT,
    ARR_STRING,

} ArrayType;

typedef struct Array
{
    size_t size;
    size_t capacity;
    ArrayType type;
    void* data;

} Array;


Array* ArrayCreate(size_t initial_size, ArrayType type);

void ArrayDestroy(Array* array);

void ArrayPrint(Array* array, ArrayType type);


#endif // !C_ARRAY_H
