#include <stdio.h>
#include <stdlib.h>

int main()

{
    int conv, num;
    double time,baud, charps, charps2;
    printf("Key in the baud rate \n");
    scanf("%lf",&baud);
    printf("Press 1 to convert to millisecond \nPress 2 to convert to microsecond \nPress 3 to convert to nanoseconds\n");
    scanf("%d", &conv);
    charps = baud/10;



    if(conv==1)
    {
        time= (1/baud)*1000;
        printf("Time is %f millisec \n ", time);
        printf("Char per second:%f \n", charps);
        printf("If char per second is not 10 char, enter number of chars \n");
        scanf("%d", &num);
        charps2=baud/num;
        printf("Char per second of %d is %0.5f", num, charps2);
    }
    else if (conv==2)
    {

        time = (1/baud)*1000000;
        printf("Time is %f microsec\n ", time);
        printf("Char per second:%f \n", charps);
        printf("If char per second is not 10 char, enter number of chars \n");
        scanf("%d", &num);
        charps2=baud/num;
        printf("Char per second of %d is %0.5f", num, charps2);
    }

    else if (conv==3)
    {

        time = (1/baud)*1000000000;
        printf("Time is %f ns \n ", time);
        printf("Char per second:%f \n", charps);
        printf("If char per second is not 10 char, enter number of chars \n");
        scanf("%d", &num);
        charps2=baud/num;
        printf("Char per second of %d is %0.5f", num, charps2);
    }

    return 0;
}
