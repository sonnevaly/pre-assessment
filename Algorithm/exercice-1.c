#include <stdio.h>

int main()
{
    // TODO
    //  Input the number, the range min and the range max 
    //  Output "inside" if the number is in the range [min, max], "outside" otherwise
    int number;
    int rangeMin;
    int rangeMax;

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the range minimum: ");
    scanf("%d", &rangeMin);
    printf("Enter the range maximum: ");
    scanf("%d", &rangeMax);

    if(number >= rangeMin && number <= rangeMax){
        printf("inside");
    } else {
        printf("outside");
    }
    return 0;
}
