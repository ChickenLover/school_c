#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //Генерируем случайное n от 1 до 100
    srand (time(NULL));
    int n = rand() % 100 + 1;

    //Пишите свою программу здесь


    return 0;
}
