//A temperature converter

#include<stdio.h>
#include<math.h>


//needed functions


void cel_to_fahr(void);
void cel_to_kel(void);
void fahr_to_cel(void);

//global variables

float temp;
float inp;


int main()
{

    int choice;


//taking choice

    printf(" \nCHOOSE CONVERSION \n 1. celsius to fahrenheit \n 2. fahrenheit to celsius \n 3. celsius to kelvin \n\nchoice :");
    scanf("%d",&choice);

//taking temp input

    printf("\nenter temperature :");
    scanf("%f",&inp);
// printf("%f \n",inp);

    if(choice == 1) {
        printf("\nyou chose celsius to fahrenheit conversion\n");
        cel_to_fahr();
        printf("\nresult : %f F",temp);
    }
    if(choice == 2) {
        printf("\nyou chose fahrenheit to celsius conversion\n");
        fahr_to_cel();
        printf("\nresult : %f C",temp);
    }
    if(choice == 3) {
        printf("\nyou chose celsius to kelvin conversion\n");
        cel_to_kel();
        printf("\nresult : %f k",temp);
    }

//printing result


    return 0;
}

//conversion 1

void cel_to_fahr(void)
{
//local variables
    float calc1;
    float calc2;
    float calc3;

//calculation
    calc1 = inp * 9;
//printf("%f\n",calc1);
    calc2 = calc1 / 5;
//printf("%f\n",calc2);
    calc3 = calc2 + 32;
// printf("%f\n",calc3);
    temp = calc3;
}

//conversion 2 

void fahr_to_cel(void)
{
//local variables
    float calc1;
    float calc2;
    float calc3;

//calculation
    calc1 = inp - 32;
//printf("%f\n",calc1);
    calc2 = calc1 * 5;
//printf("%f\n",calc2);
    calc3 = calc2 / 9;
//printf("%f\n",calc3);
    temp = calc3;

}

//conversion 3

void cel_to_kel(void)
{
    temp = inp + 273;
}
