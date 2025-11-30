#include<stdio.h>
#include<math.h>
int main(){

    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; //Uppercase automally makes the variable Constant.

    printf("Enter the Radius: ");
    scanf("%lf",&radius);

    area = PI * (pow(radius,2));
    surface_area = 4 * PI * pow(radius,2);
    volume = (4.0/3.0) * PI * pow(radius,3);

    
    printf("Area of Circle = %.2lf \n",area);
    printf("Surface Area of Sphere = %.2lf \n",surface_area);
    printf("Volume of Sphere = %.2lf",volume);




return 0;
}
