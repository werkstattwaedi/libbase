// Example usage for libbase library by michschn@gmail.com.

#include "libbase.h"

// Initialize objects from the lib
Libbase libbase;

void setup() {
    // Call functions on initialized library objects that require hardware
    libbase.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    libbase.process();
}
