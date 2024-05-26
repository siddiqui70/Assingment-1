#include <stdio.h>

int main() {
    int minutes, hours, remaining minutes;

    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

   
    hours = minutes / 60;
    remaining minutes = minutes % 60;

  
    printf("Total time: %02d:%02d\n", hours, remaining minutes);

    return 0;
}
