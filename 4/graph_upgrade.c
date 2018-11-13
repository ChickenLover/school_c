#include <stdio.h>

//Выносим нашу математическую функцию в отдельную функцию
int f(int x){
    return x * x - 3 * x - 1;
}

//Функция fill_array будет заполнять массив a, длины len
//значениями функции f, при x от 0 до len
//Обратите внимание, функция возвращает void - значит ничего
//Один из аргументов - int *a - массив произвольной длины
void fill_array(int *a, int len){
    for(int i = 0; i < len; i++){
        a[i] = f(i);
    }
}

void print_array(int *a, int len){
    for(int i = 0; i < len; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}



int main(){
    //Обратите внимание, как красива стала функция main
    
    //Создаем массив из 100 чисел
    int a[100];
    fill_array(a, 100);
    print_array(a, 100);
    //printf("max(a) = %d\n", max(a, 100));
    //printf("min(a) = %d\n", min(a, 100));
    
    return 0;
}
