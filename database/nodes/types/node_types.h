#ifndef TEST_NODE_TYPES_H
#define TEST_NODE_TYPES_H

typedef enum {
    SHORT,
    UNSIGNED_SHORT,
    SIGNED_SHORT,

    INT,
    UNSIGNED_INT,
    SIGNED_INT,

    LONG,
    UNSIGNED_LONG,
    SIGNED_LONG,

    LONG_LONG,
    UNSIGNED_LONG_LONG,
    SIGNED_LONG_LONG
} number_type;

typedef enum {
    BOOL,
    STRING,
    CHAR,
    BYTE,
    BIT,
    NUMBER,
    FLOAT,
} types;




#endif //TEST_NODE_TYPES_H
