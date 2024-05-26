#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;
    const float PI = 3.14159265359;

    // Ask the user to enter the radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the volume of the sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Display the result
    printf("Volume of the sphere: %.2f cubic units\n", volume);

    return 0;
}
