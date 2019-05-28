#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int min, hour, n;
    printf("Please input the hour: ");
    scanf("%d", &hour);
    printf("Please input the minute: ");
    scanf("%d", &min);


    system("netsh interface set interface name=\"WIFI\" admin=disabled");
    for (n = 0; n < hour; ++n)
        system("choice /c k /n /t 3600 /d k 1>nul");
    
    char string[100];
    min *= 60;
    sprintf(string, "choice /c k /n /t %d  /d k 1>nul", min);
    system(string);


    system("netsh interface set interface name=\"WIFI\" admin=enabled");

    system("choice /c k /n /t 600 /d k 1>nul");
    system("shutdown -f -s -t 20");


    return 0;
}