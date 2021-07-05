#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = (width + height)*2.00;
    double area = width*height;

    printf("With a height and width of: %.2f and %.2f,\n the perimeter is: %.2f.\n", height, width, perimeter);
    printf("With a height and width of: %.2f and %.2f,\n the area is: %.2f.\n", height, width, area);

}