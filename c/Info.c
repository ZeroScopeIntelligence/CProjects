#include <stdio.h>
#include <string.h>


int main() {

    char fullName[50];
    int age;
    int favoriteCode;

    // Prints users name
    printf("Enter your name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);


    // Prints users age
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("What is your favorite Programming Language:");
    scanf(" %c", &favoriteCode);

    // Different Code Options
    switch (favoriteCode) {

        case 1: 
            printf("You chose C");
            break;
        
        case 2:
            printf("You chose Java");
            break;

        case 3:
            printf("You chose Python");
            break;

        case 4:
            printf("You chose Rust");
            break;

    }
        

    
    printf("======== Users Info ========");
    printf("Your Name is: %s", fullName);
    printf("Age: %d\n", age);
    printf("Favorite Code: %d\n", favoriteCode);


    return 0;
    

}