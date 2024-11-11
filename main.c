#include "array.h"

int main(int argc, char *argv[])
{
    ArrayType type = ARR_INT;

    Array* array = ArrayCreate(10, type);

    ArrayPrint(array, type);

    ArrayDestroy(array);
}
