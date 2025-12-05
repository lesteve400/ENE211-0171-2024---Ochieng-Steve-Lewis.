#include <stdio.h>
int main() {
double radius, area;
const double PI = 3.14159;

printf("Enter the radius of the sphere: ");
scanf("%lf",&radius);

area = 4 * PI * radius * radius;

printf("Surface Area of the sphere = %.2lf\n", area);

return 0;
}
