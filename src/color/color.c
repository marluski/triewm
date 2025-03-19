#include "color.h"

Color Color_create(uint8_t r, uint8_t g, uint8_t b) {
    return (Color){ r, g, b };
}

Color Color_red()   { return Color_create(255, 0, 0); }
Color Color_green() { return Color_create(0, 255, 0); }
Color Color_blue()  { return Color_create(0, 0, 255); }
Color Color_white() { return Color_create(255, 255, 255); }
Color Color_black() { return Color_create(0, 0, 0); }

Color Color_lerp(Color start, Color end, float t) {
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;

    return (Color){
        .r = (uint8_t)((1 - t) * start.r + t * end.r),
        .g = (uint8_t)((1 - t) * start.g + t * end.g),
        .b = (uint8_t)((1 - t) * start.b + t * end.b),
    };
}

