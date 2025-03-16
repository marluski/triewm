#include "color.h"
#include "vec.h"
#include <stdlib.h>

void free_gradient(Gradient *g)
{
    // Free the colors vector
    if (g->colors.len > 0) // Check if the vector has elements
    {
        VEC_FREE(g->colors);
    }

    // Free the points vector
    if (g->points.len > 0) // Check if the vector has elements
    {
        VEC_FREE(g->points);
    }

    // Free the Gradient struct itself
    free(g);
}

