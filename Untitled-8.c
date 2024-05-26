#include <stdio.h>

int main() {
    int minutes, hours, remainingminutes;

    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

   
    hours = minutes / 60;
    remainingminutes = minutes % 60;

  
    printf("Total time: %02d:%02d\n", hours, remainingminutes);

    return 0;
}
