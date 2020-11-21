#include <stdio.h>
//WAP to convert temp from fahrenheit to centigrade degree
//formula c = (f-32)*5/9
int main()
{
    //declare variables from formula
    float c,f;
    //user temp input in fahrenheit
    printf("\nconvert temperature from fahrenheit to centigrade :-");
    printf("\nenter the value of temperature in fahrenheit : ");
    scanf("%f", &f);
    
    //convert tem from fahrenheit to centigrade
    //apply formula
    c = (f-32)*5/9;
    //display output
    printf("\n %f fahrenheit temperature is equal to %f centigrade", f, c);
}
