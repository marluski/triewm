#ifndef VEC_H
#define VEC_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    size_t len;   // Current length of the vector
    size_t cap;   // Current capacity of the vector
    void *data;   // Pointer to the data
} Vec;

// Macro to initialize a Vec
#define VEC_INIT(v, element_size)                                             \
    do {                                                                     \
        (v).cap = 18;                                                         \
        (v).len = 0;                                                          \
        (v).data = malloc((v).cap * (element_size));                        \
        if (!(v).data) {                                                      \
            abort();                                                          \
        }                                                                    \
    } while (0)

// Macro to push an element into the Vec
#define VEC_PUSH(v, element, element_size)                                   \
    do {                                                                     \
        if ((v).len >= (v).cap) {                                            \
            (v).cap *= 2;                                                    \
            (v).data = realloc((v).data, (v).cap * (element_size));        \
            if (!(v).data) {                                                  \
                abort();                                                    \
            }                                                                \
        }                                                                    \
        memcpy((char *)(v).data + ((v).len * (element_size)), &(element), (element_size)); \
        (v).len++;                                                           \
    } while (0)

// Macro to pop the last element from the Vec
#define VEC_POP(v)                                                           \
    do {                                                                     \
        if ((v).len == 0) {                                                  \
            abort();                                                          \
        }                                                                    \
        (v).len--;                                                           \
    } while (0)

// Macro to get an element from the Vec
#define VEC_GET(v, index, element_size)                                      \
    ({                                                                      \
        if ((index) >= (v).len) {                                           \
            abort();                                                         \
        }                                                                    \
        (char *)(v).data + ((index) * (element_size));                     \
    })

// Macro to set an element in the Vec
#define VEC_SET(v, index, element, element_size)                            \
    do {                                                                     \
        if ((index) >= (v).len) {                                           \
            abort();                                                         \
        }                                                                    \
        memcpy((char *)(v).data + ((index) * (element_size)), &(element), (element_size)); \
    } while (0)

// Macro to free the Vec
#define VEC_FREE(v)                                                          \
    do {                                                                     \
        free((v).data);                                                      \
        (v).data = NULL;                                                    \
        (v).len = 0;                                                         \
        (v).cap = 0;                                                         \
    } while (0)

#endif // VEC_H

