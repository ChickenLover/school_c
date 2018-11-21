#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //Генерируем случайное n от 1 до 100
    srand (time(NULL));
    int n = rand() % 100 + 1;

    int guess;
    int steps = 0;
    do{
        steps++;
        printf("Enter your guess\n");
        scanf("%d", &guess);
        if(guess != n){
            if(guess > n){
                printf("My number is lower\n");
            }
            else{
                printf("My number is higher\n");
            }
        }
    }while(guess != n);
    printf("Well done! You did it in %d steps\n", steps);
    return 0;
}
