//#include <stdio.h>
//
//int *p;
//int main() {
//    char str[]="String from Letters in Different Register";
//    printf("Строка будет напечатана строчными буквами");
//    p=str;
//    while (*p)
//        printf("c",(*p++));
//    return 0;
//}

/* Массив указателей*/
//#include <stdio.h>
//#include <string.h>
//
//main()
//{
//    char *ext[]={"exe","com", "dat", "c","pas","cpp"};
//    char ch,s1[80];
//    for(;;)
//    {
//        do {
//            printf("Файлы с расширением:\n");
//            printf("1. exe \n");
//            printf("2. com\n");
//            printf("3. dat \n");
//            printf("4. c\n");
//            printf("5. pas\n");
//            printf("6. cpp\n");
//            printf("7. guit \n");
//            printf("Ваш выбор:\n");
//            ch = getchar();
//            printf("\n");
//
//        }
//        while ((ch<'1' || (ch>'7')));
//        if (ch=='7') break;
//        strcp(s1,"dir*.");
//        strcat(s1,ext[ch-1]);
//    }
//}
//#include <stdio.h>
//main()
//{
//    int *pi;
//    int **ppi;
//    int i;
//    i=7;
//    pi=&i;
//    ppi=&pi;
//        printf("i=%d pi=%p ppi=%p \n",i, " " ,pi," ",ppi);
//        **ppi=12;
//        printf("i=%d pi= %p ppi=%p\n", i, " ", pi, " ", ppi);
//    return 0;
//
//}
#include <stdio.h>
char *find(char *string)
{
    int i=0;
    while ((string[i]!=' ') && (string[i] !=' \0')) i++;
    if (string[i]) return &string;
    else return NULL;


}
