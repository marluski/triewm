#include "gradient.h"
#include <stdlib.h>

Gradient Gradient_create(Color start, Color end) {
    Gradient g = { start, end };
    return g;
}

Color Gradient_getColorAt(Gradient *g, float t) {
    return Color_lerp(g->start, g->end, t);
}

Vec Gradient_generateSteps(Gradient *g, size_t steps) {
    Vec colors;
    VEC_INIT(colors, 6);

    for (size_t i = 0; i < steps; ++i) {
        float t = (float)i / (float)(steps - 1);
        Color c = Gradient_getColorAt(g, t);
        VEC_PUSH(colors, c, sizeof c);
    }

    return colors;
}

