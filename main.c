#include <stdio.h>

// 12
int main(){
    int id, worked_hours, amount_per_hour;

    printf("please enter the id: ");
    scanf("%d", &id);

    printf("please enter hours worked: ");
    scanf("%d", &worked_hours);

    printf("please enter amount received per hour: ");
    scanf("%d", &amount_per_hour);

    printf("the ID is: %d\nthe salary is: $%.2f\n", id, (float) worked_hours * amount_per_hour);
    return 0;
}
