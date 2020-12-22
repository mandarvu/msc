#include <stdio.h>
#include <math.h>

/*Structure to hold x and y
 co-ordinates of a point*/
struct point {
    float x;
    float y;
};

//Calculate dist between two points using Euclidean distance formula
float dist_calc(struct point A, struct point B) {
    float dist;
    dist = pow(A.x - B.x, 2) + powf(A.y - B.y, 2);
    return sqrt(dist);
}

int main(void) {
    struct point A, B;
    printf("Enter Co-ordinates of A: ");
    scanf("%f %f", &A.x, &A.y);

    printf("Enter Co-ordinates of B: ");
    scanf("%f %f", &B.x, &B.y);   

    printf("The distance between entered points is %4.3f\n", dist_calc(A,B));
    return 0;
}
