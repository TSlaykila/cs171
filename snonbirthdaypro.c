#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double size;            
    int repeat_count = 0;    
    double probability;       

    // Get the class size 
    printf("Enter the number of students (class size): ");
    scanf("%lf", &size); 

    // Run the simulation 1 million times
    int i = 0;
    while (i < 1000000) {
        // Array to track birthdays for the class
        int birthdays[366] = {0};
        int j = 0;
        int repeat_found = 0;

        // Generate random birthdays for each student in the class
        while (j < size) {
            int birthday = floor(365*drand48()+1); 
            birthdays[birthday]++;  

            if (birthdays[birthday] > 1) {
                repeat_found = 1;
                break; //Break the loop and go to the second if
            }

            j++;
        }

        if (repeat_found) {
            repeat_count++;
        }

        i++;  // Increment the simulation counter
    }

    // Calculate the probability of at least one repeated birthday
    probability = (double)repeat_count / 1000000;

    printf("%lf\n", 1 - probability);

    return 0;
}