#ifndef C_ARRAY_H
#define C_ARRAY_H

#include <stddef.h>

typedef struct Array
{
    void* data;
    size_t size;
    size_t capacity;

} Array;


#endif // !C_ARRAY_H
