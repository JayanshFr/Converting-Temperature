#include <emsgitcripten.h>

// Convert Celsius to Fahrenheit
EMSCRIPTEN_KEEPALIVE
double celsius_to_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

// Convert Fahrenheit to Celsius
EMSCRIPTEN_KEEPALIVE
double fahrenheit_to_celsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}