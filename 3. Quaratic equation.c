#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    
    printf("Enter coefficient a,b,c ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        printf("\n This is not a quadratic equation.\n");
        return 1;
    }
    
    discriminant = (b * b) - (4 * a * c);
       
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Nature of roots: Two distinct real roots\n");
        printf("Root 1 : %.4f\n", root1);
        printf("Root 2 : %.4f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        
        printf("Nature of roots: Equal real roots\n");
        printf("Root: %.4f\n", root1);
    }
    else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        
        printf("Nature of roots: Complex conjugate roots\n");
        printf("Root 1 : %.4f + %.4fi\n", realPart, imaginaryPart);
        printf("Root 2 : %.4f - %.4fi\n", realPart, imaginaryPart);
    }
    
    return 0;
}
