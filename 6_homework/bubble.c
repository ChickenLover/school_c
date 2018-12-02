#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Функция заполняет массив a, длины len случайными значениями
void fill_array_with_random(int *a, int len){
    for(int i=0; i<len; i++){
        a[i] = rand() % 100 + 1;
    }
}

// Выводит массив в консоль
void print_array(int *a, int len){
    for(int i=0; i<len; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(){

    // Раскомментить чтобы числа стали рандомными при каждом запуске
    //srand (time(NULL));
    
    // Создаем массив
    int a[15];

    // Заполняем его случайными значениями
    fill_array_with_random(a, 15);
    
    // Распечатаем чтобы посмотреть что получилось
    print_array(a, 15);

    for(int i=0; i<15; i++){
        for(int j=1; j<15; j++){
            if(a[j] < a[j - 1]){
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }

    // Распечатаем чтобы посмотреть отсортированный массив
    print_array(a, 15);
    
    return 0;
}
