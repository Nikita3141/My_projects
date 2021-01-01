//#include <stdio.h>
//main(){
//    int year, month;
//    year=1996;
//        printf("Сейчас %d год \n", year);
//}

/* Пример 2
 * Вычисление длины окружности */
//main()
//{
//    int radius;
//    float length;
//    printf ("Введите радиус: \n");
//    scanf("%d",& radius);
//    length =3.1415*2*radius;
//    printf("Радиус-%d \n длина -%f\n",radius,length);
//
//}

/* Пример 3
* Программа, использующая функцию с аргументов для вычисления длины окружности */
//#include <stdio.h>
//void length(float);
//
//
//
//
//main() {
//    float radius;
//    radius = 5;
//    length(radius);
//    scanf("%f", &radius);
//}
//
//
//void length (float r)
//{
//    printf("Длина окружности радиуса равна %f\n",r,3.1415*2*r);
//}

/* пример 4
 * выводит числа от 10 до 1 */
//#include <stdio.h>
//main()
//{
//    int i;
//    for( i=10; i>0;i--) printf("%d\n",i);
//    printf("Старт!\n");
//}


/* Пример 5
 *  gets()*/
//#include <stdio.h>
//main()
//{
//    char str[80];
//    printf("Введите ваше имя");
//    gets(str);
//    printf("Я знаю ваше имя, Ваше имя %s",str);
//}
/* Пример использования switch*/
//#include <stdio.h>
//main()
//{
//    char ch;
//    printf("Введите заглавную букву алфавита:")
//    ch=getchar();
//    if (ch>='A' && ch<='Я')
//        switch (ch) {
//
//            case 'A':
//                printf("Алексеев \n");
//                break;
//            case 'B':
//                printf("Булгаков");
//                break;
//            default:
//                printf("Кто-то другой");
//                break;
//
//        }
//    else printf("Надо было ввести заглавную букву");

//}
/* Пример использования getchar */
//#include <stdio.h>
//main()
//{
//    unsigned char ch;
//    for(;;){
//        ch=getchar(); //прочитать символ
//        if (ch=='Q') break;
//        printf("%c",ch);
//    }
//}
/* Использование do while. Программа выбирает случайное число от 1 до 100 вы должны угадать его */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//main()
//{
//    int s,x;
//    int n=0;
//    randomize();
//    s=random(100)+1;
//    do{
//        printf("Введите число от 1 до 100");
//        scanf("%d", & x);
//        n++;
//        if (s<x) printf("Загадное число меньше \n");
//        else printf("Загаданное чилос больше\n");
//
//    }
//    while (s-x);
//    printf("Вы угадали число!");
//    printf("Вы затратили на угадывание %d попыток\n",n);
//}
/* Вложенные циклы */


//main()
//{
//    int i,j;
//    for (i=0;i<10;i++)
//    {
//        for (j=1;j<5;j++)
//            printf("%d*%d=%2d",i,j,i*j);
//            printf("\n");
//    }
//}
/* break в цикле */
//#include <stdio.h>
//main()
//{
//    int i;
//    for (i=0;i<1000;i++)
//    {
//        printf("%d-%d\n",i,i*i*i);
//        if (i*i*i>=10000) break;
//    }
//}
//#include <stdio.h>
//main()
//{
//    int i;
//    for (i=1;i<1000;i++)
//    {
//        if (i%7) continue;
//            printf("%8d",i);
//    }
//}

