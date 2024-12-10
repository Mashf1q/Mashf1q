#include<stdio.h>
#include<math.h>

float area_circle();
float area_rectangle();
float area_square();

float area;


int main() {
int choice;

//taking shape
printf("enter shape : \n1. circle\n2. rectangle\n3. square\n");
scanf("%d",&choice);

//calling fuc
if(choice == 1)  area_circle();
if(choice == 2)  area_rectangle();
if(choice == 3)  area_square();

printf("area ;%f",area);
return 0;
}

float area_circle(){
float calc1;
float radius;

printf("enter radius :");
scanf("%f",&radius);

calc1 = radius * radius;
area = calc1 * 3.1416;
}

float area_rectangle(){
float len;
float hig;

printf("enter lenght  :");
scanf("%f",&len);

printf("enter hight :");
scanf("%f",&hig);

area = len * hig; 
}

float area_square(){

float len;

printf("enter lenght");
scanf("%f",&len);

area = len * len;
}

