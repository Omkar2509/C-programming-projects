#include<stdio.h>
#include<windows.h>
int main()
{
    int min, sec, hr;
    int d=1000;
    printf("Set time :\n");
    printf("In the format = hours: minutes: seconds");
    scanf("%d%d%d", &hr, &min, &sec);
    if(hr>24 || min>60 || sec>60)
    {
        printf("Error..!!");
        exit(0);
    }
    while(1)
    {
        sec++;
        if(sec>59)
        {
            min++;
            sec=0;
        }
        if(min>59)
        {
            hr++;
            min=0;
        }
        if(hr>24)
        {
            hr=1;

        }
        printf("\nClock :\t");
         printf("%02d:%02d:%02d", hr, min, sec);
       
        if(hr>12)
        {
            printf("PM");
        }
        else
        {
            printf("AM");
        }
        Sleep(d);
        system("cls");
    }
    return 0;


}