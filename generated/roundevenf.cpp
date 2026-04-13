#include <math.h>

extern "C" float roundevenf(float x) {
    return nearbyintf(x);
}

extern "C" double roundeven(double x) {
    return nearbyint(x);
}


