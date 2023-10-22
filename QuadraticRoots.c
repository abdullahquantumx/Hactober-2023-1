#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients from the user
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Check if roots are real or complex
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
