#ifndef COLOR_H
#define COLOR_H

#include "vec.h"

typedef struct
{
    int r, g, b;
} Color;

typedef struct Gradient
{
    Vec points;
    Vec colors;
    Gradient(Vec arg_colors, Vec arg_points)
    {
        points = arg_points;
        colors = arg_colors;
    }
} Gradient;

int free_gradient(Gradient *g);

#endif // COLOR_H
