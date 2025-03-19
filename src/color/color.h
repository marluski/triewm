#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

// RGB color structure
typedef struct {
    uint8_t r, g, b;
} Color;

// Color creation and predefined colors
Color Color_create(uint8_t r, uint8_t g, uint8_t b);
Color Color_red();
Color Color_green();
Color Color_blue();
Color Color_white();
Color Color_black();

// Interpolation (gradient) between two colors
Color Color_lerp(Color start, Color end, float t);

#endif // COLOR_H

