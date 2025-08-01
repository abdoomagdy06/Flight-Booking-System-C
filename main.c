#include <stdio.h>

void main() {
    int choice, seat, time_choice, confirm;
    char name[50];

    printf("Welcome to Cairo International Airport Flight Booking System\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\nHello, %s! Please choose your destination:\n", name);
    printf("1. Jeddah Airport (Ticket: 5000 EGP)\n");
    printf("2. Dubai Airport (Ticket: 7000 EGP)\n");
    printf("3. Qatar Airport (Ticket: 6000 EGP)\n");
    printf("Enter your choice (1 to 3): ");
    while(1){
        scanf("%d", &choice);
        printf("test");
    }
    if (choice >= 1 && choice <= 3) {
        printf("Enter number of seats: ");
        scanf("%d", &seat);

        if (seat <= 0) {
            printf("Invalid number of seats.\n");
            return;
        }

        printf("\nAvailable Flight Times:\n");

        if (choice == 1) {
            printf("1. 9:00 AM\n2. 3:00 PM\n3. 10:00 PM\n");
        } else if (choice == 2) {
            printf("1. 12:00 PM\n2. 6:00 PM\n3. 2:00 AM\n");
        } else {
            printf("1. 8:00 AM\n2. 1:00 PM\n3. 7:00 PM\n");
        }

        printf("Select flight time (1-3): ");
        scanf("%d", &time_choice);

        if (time_choice < 1 || time_choice > 3) {
            printf("Invalid time selection.\n");
            return;
        }

        int price;
        char destination[20];
        if (choice == 1) {
            price = 5000;
            sprintf(destination, "Jeddah");
        } else if (choice == 2) {
            price = 7000;
            sprintf(destination, "Dubai");
        } else {
            price = 6000;
            sprintf(destination, "Qatar");
        }

        int total = seat * price;

        printf("\nConfirm your booking? (1 for Yes, 2 for No): ");
        scanf("%d", &confirm);

        if (confirm == 1) {
            printf("\n--- Booking Confirmation ---\n");
            printf("Name: %s\n", name);
            printf("Destination: %s\n", destination);
            printf("Number of Seats: %d\n", seat);

            printf("Flight Time: ");
            if (choice == 1) {
                if (time_choice == 1) printf("9:00 AM\n");
                else if (time_choice == 2) printf("3:00 PM\n");
                else printf("10:00 PM\n");
            } else if (choice == 2) {
                if (time_choice == 1) printf("12:00 PM\n");
                else if (time_choice == 2) printf("6:00 PM\n");
                else printf("2:00 AM\n");
            } else {
                if (time_choice == 1) printf("8:00 AM\n");
                else if (time_choice == 2) printf("1:00 PM\n");
                else printf("7:00 PM\n");
            }

            printf("Total Price: %d EGP\n", total);
            printf("Booking Confirmed. Have a nice flight!\n");
        } else {
            printf("Booking canceled.\n");
        }

    } else {
        printf("Invalid destination choice.\n");
    }
}
