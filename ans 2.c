#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
    double m = 3;
    double wavelength = 530;
    double theta = 65;
    double t = (pi / 180) * theta;
    double d = (m * wavelength) / sin(t);
    double m2 = 2;
    double wavelength2 = 700;
    double sintheta2 = (m2 * wavelength2) / d;
    if (sintheta2 >= -1 && sintheta2 <= 1)
    {
        double thetafinal = asin(sintheta2);
        double k = (thetafinal * 180) / pi;
        printf("Value of theta is = %.2lf\n", k);
    }
    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}
