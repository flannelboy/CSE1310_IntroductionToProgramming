#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius = getRadius();
    while (radius != -1)
    {
        float volume = sphereVolume(radius);
        printf("Volume = %.2f\n\n", volume);
        radius = getRadius();
    }

    return 0;
}
