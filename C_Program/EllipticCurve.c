#include <stdio.h>
#include <math.h>
//elliptic curve equation (y^2 = x^3 + ax + b)
int main() {
    int a, b; // Constants 'a' and 'b'
    int x, y; // Variables for 'x' and 'y'

    // Prompt the user to enter values for 'a' and 'b'
    printf("Enter the values of 'a' and 'b' in the elliptic curve equation:\n");
    printf("y^2 = x^3 + ax + b\n");
    scanf("%d %d", &a, &b);

    // Prompt the user to enter a value for 'x'
    printf("Enter a value for 'x': ");
    scanf("%d", &x);

    // Calculate 'y' using the equation y^2 = x^3 + ax + b
    int temp = pow(x, 3) + (a * x) + b;
    y = sqrt(temp);

    // Print the result
    printf("For x = %d, the corresponding value of y is: %d\n", x, y);

    return 0;
}
