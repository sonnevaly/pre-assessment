#include <stdio.h>
struct Date
   {
    int year;
    int month;
    int day;
   };
   
int main()
{
    // TODO

    //  Enter the first person date of birth (year/month/day)
    //  Enter the second person date of birth (year/month/day)
    
    //  Depending on the 2 dates of birth, print either:
    //  - The first person is the youngest
    //  - The second person is the youngest
    //  - Both persons have the same age
    struct Date person1, person2;

    printf("\nThe First person DoB\n");
    printf("Enetr Year: ");
    scanf("%d",&person1.year);
    printf("Enetr Month: ");
    scanf("%d",&person1.month);
    printf("Enetr Day: ");
    scanf("%d",&person1.day);

    printf("\nThe Second person DoB\n");
    printf("Enetr Year: ");
    scanf("%d",&person2.year);
    printf("Enetr Month: ");
    scanf("%d",&person2.month);
    printf("Enetr Day: ");
    scanf("%d",&person2.day);

    if (person1.year < person2.year) {
        printf("\nThe second person is the youngest.\n");
    } else if (person1.year > person2.year) {
        printf("\nThe first person is the youngest.\n");
    } else if (person1.month < person2.month) {
        printf("\nThe second person is the youngest.\n");
    } else if (person1.month > person2.month) {
        printf("\nThe first person is the youngest.\n");
    } else if (person1.day < person2.day) {
        printf("\nThe second person is the youngest.\n");
    } else if (person1.day > person2.day) {
        printf("\nThe first person is the youngest.\n");
    } else {
        printf("\nBoth persons have the same age.\n");
    }
        
    return 0;
}
