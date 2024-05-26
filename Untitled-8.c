#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

   
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

  
    printf("Total time: %02d:%02d\n", hours, remaining_minutes);

    return 0;
}
