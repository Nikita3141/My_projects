//
//strlen() возвращает длину строки s, при этом завершающий нулевой байт не учитывается.
//#include <stdio.h>
//#include <string.h>
//main()
//{
//    char s[80];
//    printf("Введите строку");
//    gets(s);
//    printf("Строка \n %s \n имеет длину %d символов", s,strlen(s));
//}

// Сортировка массива:
//#include <stdio.h>
//main()
//{
//    int arr[10]= {1,23,4,7,8,0,1,9,4,7};
//    int i,j,tmp,a;
//        printf("Неотрицательный массив");
//for(i=0;i<10;i++)
//    printf("%d",arr[i]);
//        printf("\n");
//            for(i=0;i<9;i++)
//                for(j=i;j<10;j++)
//                    if(arr[j] <arr[j+1])
//                    {
//                        tmp=arr[j];
//                        arr[j]=arr[j+1];
//                        arr[j+1]=tmp;
//                    }
//            printf("Отсортированный массив:");
//                    for(i=0;i<10;i++)
//                        printf("%d",arr[i]);
//                    printf("\n");
//                        return 0;
//}
// указатели
//#include <stdio.h>
//main()
//{
//    float x=10.1,y;
//    float *pf;
//    pf=&x;
//    y=*pf;
//    printf("x=%f y=%f \n",x,y);
//    pf+=10;
//    printf("%x \n",*pf);
//
//    printf("x=%f,y=%f \n",x,y);
//    y=1+*pf*y;
//
//    printf("x=%f y=%f \n",x,y);
//    return 0;
//}
