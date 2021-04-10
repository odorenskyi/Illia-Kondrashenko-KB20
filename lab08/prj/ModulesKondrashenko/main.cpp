#include <cmath>
#include <iostream>

using namespace std;

float s_calculation(float x, float y, float z)
{
    const double PI = 3.141592653589793;
    float S = z + 2 * pow(y, 2)/log(x-y) + sqrt(PI * x );
    S = int(S*100 + 0.5)/100.0;

    return S;
}
