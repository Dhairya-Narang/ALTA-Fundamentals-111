// Define a custom type called Point with x and y fields, and a function (or method) that computes the distance 
// between two Points using the distance formula. 
// Input: (0,0) and (3,4)  Output: 5

#include <stdio.h>
#include <math.h>

struct point{
    float x,y;
};

float distance(struct point p1, struct point p2);

int main(){
    struct point p1,p2;
    printf("Distance Caluculator\n");
    printf("Enter starting point coordinates :");
    scanf("%f %f",&p1.x,&p1.y);

    printf("Enter ending point coordinates : ");
    scanf("%f %f",&p2.x,&p2.y);

    printf("Distance between points: %.2f\n",distance(p1,p2));
    
}

float distance(struct point p1, struct point p2){
    return sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));
    
}