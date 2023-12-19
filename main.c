#include <stdio.h>

int main(void) {
    char sb[5] = "Keith";

    printf("What is your name?\n");
    char name[100];
    scanf("%s", name);

        if(name == sb){
        printf("Welcome StikkyBeard Would you Like to Play a Game?\n");
        char game[100];

        scanf("%s", game);

        if (game == "Yes"){

        printf("What is your age?\n");
        int age;
        scanf("%d", &age);

        printf("What is your favorite color?\n");
        char color[100];
        scanf("%s", color);
    
        printf("What is your favorite food?\n");
        char food[100];
        scanf("%s", food);
    
        printf("What is your favorite number?\n");
        int number;
        scanf("%d", &number);
    
        printf("Hello, %s!\n", name);
        printf("You are %d years old.\n", age);
        printf("Your favorite color is %s.\n", color);
        printf("Your favorite food is %s.\n", food);
        printf("Your favorite number is %d.\n", number);

    }else{

        return 0;
    }


        }
        return 0;
}