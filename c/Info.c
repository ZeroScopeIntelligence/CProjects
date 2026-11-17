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


    printf("Select your favotite code:\n");
    printf("1. C");
    printf("2. Java\n");
    printf("3. Python\n");
    printf("4. Rust\n");

    printf("You selected: ");
    scanf(" %d", &favoriteCode);

 

    // Different Code Options
    switch (favoriteCode) {

        case '1': 
            printf("1. C");
            break;
        
        case '2':
            printf("2. Java");
            break;

        case '3':
            printf("3. Python");
            break;
    
        case '4':
            printf("4. Rust");
            break;

    }

    
   

    // prints out users stats
    printf("======== Users Info ========\n");
    printf("Your Name is: %s", fullName);
    printf("Age: %d\n", age);
    printf("Favorite Code is: %d\n", favoriteCode);


    return 0;
    

}