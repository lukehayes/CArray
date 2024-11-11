#ifndef C_ARRAY_H
#define C_ARRAY_H

#include <stddef.h>

#define ARRAY_INIT_SIZE 10

typedef enum ArrayType
{
    INT,
    STRING,
    DOUBLE,
    FLOAT

} ArrayType;

typedef struct Array
{
    void* data;
    size_t size;
    size_t capacity;

} Array;


Array* ArrayCreate(size_t initial_size);

void ArrayDestroy(Array* array);



#endif // !C_ARRAY_H
