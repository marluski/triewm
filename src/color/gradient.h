#ifndef GRADIENT_H
#define GRADIENT_H

#include "color.h"
#include "vec.h"

// Gradient struct using start and end colors
typedef struct {
    Color start;
    Color end;
} Gradient;

// Gradient constructor
Gradient Gradient_create(Color start, Color end);

// Get a color at a specific point in the gradient (0.0 - 1.0)
Color Gradient_getColorAt(Gradient *g, float t);

// Generate a Vec<Color> with N interpolated steps
Vec Gradient_generateSteps(Gradient *g, size_t steps);

#endif // GRADIENT_H

