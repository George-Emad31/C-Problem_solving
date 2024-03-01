
#include <stdio.h>

// Function to calculate the number of handshakes
int calculate_handshakes(int num_people) {
    return num_people * (num_people - 1) / 2;
}

// Function to handle the user interaction
void handle_user_interaction() {
    int num_people, num_handshakes;

    while (1) {
        printf("Enter the number of people (or 0 to exit): ");
        scanf("%d", &num_people);

        // Check if the input is 0
        if (num_people == 0) {
            break;  
        } 

        // Check if the input is non-positive

        else if (num_people < 0) {
            printf("Error: The number of people must be positive.\n");
            continue;
            // Skip the rest of the loop and prompt again
        }

        num_handshakes = calculate_handshakes(num_people);
        // Display the total number of handshakes
        printf("The total number of handshakes is %d.\n", num_handshakes);
    }
}

int main() {
    printf("Hello, my name is George Emad\n");

    // Start the user interaction
    handle_user_interaction();

    return 0;
}
