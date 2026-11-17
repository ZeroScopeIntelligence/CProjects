#include <stdio.h>


int main() {

    char fullName[50];
    int age;
    char favoriteCode;


    printf("Enter your name: ");
    fgets(fullName, sizeof(fullName), stdin);
    print("Hello %s", fullName);

}