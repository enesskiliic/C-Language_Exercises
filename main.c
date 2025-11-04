#include <stdio.h>

int main() {

    printf("\n");


    // if:

    if (5 > 2){
        printf("It is true.");
    }

    printf("\n");

    int x = 30;
    int y = 50;

    if (x == y) {
        printf("1");
    }
    else if (x > y) {
        printf("2");
    } else {
        printf("3");
    }

    printf("\n");

    // if condition other version:

    int time = 50;
    (time > 30) ? printf("Yes") : printf("No");

    printf("\n");



    // while:

    int i = 5;
    while(i < 10){
        printf("%d\n",i);
        i++;
    }

    printf("\n");

    // do-while:

    int j = 0;

    do {
        printf("%d\n",j);
        j++;
    }
    while(j < 5);

    printf("\n");


    // switch-case:

    int k = 4;
    switch (k)
    {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    default:
    printf("Friday, Saturday, Sunday");
    break;
    }

    printf("\n");

    // for:

    for (int l = 5; l > 0; l--) {
        printf("%d\n", l);
    }
}