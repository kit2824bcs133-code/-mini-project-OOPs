#include <stdio.h>
#include <math.h>
#define PI 3.14159
void area_circle();
void area_triangle();
void area_rectangle();
void volume_cylinder();
void volume_sphere();
void volume_cone();
int main() {
    int choice;
    do {
        printf("\n=== AREA AND VOLUME CALCULATOR ===\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Triangle\n");
        printf("3. Area of Rectangle\n");
        printf("4. Volume of Cylinder\n");
        printf("5. Volume of Sphere\n");
        printf("6. Volume of Cone\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: area_circle(); break;
            case 2: area_triangle(); break;
            case 3: area_rectangle(); break;
            case 4: volume_cylinder(); break;
            case 5: volume_sphere(); break;
            case 6: volume_cone(); break;
            case 7: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 7);

    return 0;
}
void area_circle() {
    float r, area;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of Circle = %.2f\n", area);
}
void area_triangle() {
    float base, height, area;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", area);
}
void area_rectangle() {
    float l, b, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    printf("Area of Rectangle = %.2f\n", area);
}
void volume_cylinder() {
    float r, h, volume;
    printf("Enter radius and height of cylinder: ");
    scanf("%f %f", &r, &h);
    volume = PI * r * r * h;
    printf("Volume of Cylinder = %.2f\n", volume);
}
void volume_sphere() {
    float r, volume;
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    volume = (4.0 / 3.0) * PI * r * r * r;
    printf("Volume of Sphere = %.2f\n", volume);
}
void volume_cone() {
    float r, h, volume;
    printf("Enter radius and height of cone: ");
    scanf("%f %f", &r, &h);
    volume = (1.0 / 3.0) * PI * r * r * h;
    printf("Volume of Cone = %.2f\n", volume);
}

