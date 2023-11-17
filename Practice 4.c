#include <stdio.h>

int main()
{
    int sec, h, m, s;

    printf("Type seconds passed: ");
    scanf("%d", &sec);


    h = (sec/3600);
    m = (sec -(3600*h))/60;
    s = (sec -(3600*h)-(m*60));

    printf( "\n      %d:%d:%d \n\n ", h , m , s );
    printf( "Have a nice time! \n" );

    return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
