// Example usage for Adafrtui_APDS9960_Particle library by adafruit.

#include "Adafrtui_APDS9960_Particle.h"

// Initialize objects from the lib
Adafrtui_APDS9960_Particle adafrtui_APDS9960_Particle;

void setup() {
    // Call functions on initialized library objects that require hardware
    adafrtui_APDS9960_Particle.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    adafrtui_APDS9960_Particle.process();
}
