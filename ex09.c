#include <stdio.h>
int main (void){
    while (1)
    {

    int count = 0;
    double sum = 0.0;
    double number;

    printf("Enter numbers: \n");

    while (1)
    {
        scanf("%lf", &number);

        if (number == -1)
        {
            break;
        }

        count++;
        sum += number;
    }

    if (count > 0) {
        double average = sum / count;

        printf("Count: %d\n", count);
        printf("Sum: %.2f\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("Please enter another number instead of -1.\n");
    }
    }
    return 0;


}
