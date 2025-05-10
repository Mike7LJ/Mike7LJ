#include <stdio.h> /* Create a program for a movie ticket booking system that calculates the total cost of tickets
based on user selections. The program will utilize switch statements, arithmetic
operators, and conditional logic, while also incorporating bulk discounts and additional
services.
To achieve Marks (Between 40-49) (Basic Ticket Price Calculation)
Requirements:
    1. Create variables to store (Here you can choose any option as Default Value):
        ▪ movieType: Default value ('A' for Action).
        ▪ ticketCategory: Default value ('R' for Regular).
        ▪ ticketPrice: Price of one ticket (calculated based on defaults).
    2. Use a switch statement to determine ticket prices based on the movie type and ticket category:
        ▪ Action: £10 for Regular, £15 for Premium.
        ▪ Comedy: £8 for Regular, £12 for Premium.
        ▪ Drama: £7 for Regular, £10 for Premium.
    3. Display the default movie type, ticket category, and ticket price to the user. */ 

int main() {
    int movieType = 'A';                    // Default movie type (Action)
    int ticketCategory = 'R';               // Default ticket category (Regular)
    int ticketPrice;                         // Calculate ticket price based on defaults
    // Use a switch statement to determine ticket prices based on the movie type and ticket category
    switch (movieType) {
        case 'A': // Action
            if (ticketCategory == 'R') {
                ticketPrice = 10; // Regular ticket price for Action
            } else if (ticketCategory == 'P') {
                ticketPrice = 15; // Premium ticket price for Action
            }
            break;
        case 'C': // Comedy
            if (ticketCategory == 'R') {
                ticketPrice = 8; // Regular ticket price for Comedy
            } else if (ticketCategory == 'P') {
                ticketPrice = 12; // Premium ticket price for Comedy
            }
            break;
        case 'D': // Drama
            if (ticketCategory == 'R') {
                ticketPrice = 7; // Regular ticket price for Drama
            } else if (ticketCategory == 'P') {
                ticketPrice = 10; // Premium ticket price for Drama
            }
            break;
        default:
            printf("Invalid movie type selected.\n");
            return 1; // Exit the program with an error code
    }
    // Display the default movie type, ticket category, and ticket price to the user
    printf("Default Movie Type: %c\n", movieType);
    printf("Default Ticket Category: %c\n", ticketCategory);
    printf("Ticket Price: £%d\n", ticketPrice);
    return 0;
} /* To achieve Marks (Between 50-59) (Bulk Discounts)*/