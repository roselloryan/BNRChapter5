//
//  main.c
//  BNRChapter5-Degrees


#include <stdio.h>
#include <stdlib.h>


//// Declare global variable
//float lastTemperature;


// Declare a static variable

static float lastTemperature;

//initialize lastTemperature
static float lastTemperature = 50.0;


float fahrenheitFromCelsius(float cel) {

    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit.\n", cel, fahr);
    return fahr;
}


int main(int argc, const char * argv[]) {
    // insert code here...

    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return EXIT_SUCCESS;
}
