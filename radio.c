#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    printf("1: CLASSIX\n");
    printf("2: FMMAIN\n");
    printf("3: THE DREAM\n");
    printf("4: THE GARDEN\n");
    printf("5: BASS DRIVE\n");
    printf("6: DANCE UK RADIO\n");
    printf("7: 1MIX RADIO\n");
    printf("8: TRANCE ATHENA\n");
    printf("..: ");
    scanf("%d", &x);
    
    switch (x)
    {
        // CLASSIX
        case 1 : system("ffplay -nodisp http://5.79.70.19:80/2");
                 break;
        // FMMAIN
        case 2 : system("ffplay -nodisp http://5.79.70.19:80/1");
                 break;
        // THE DREAM
        case 3 : system("ffplay -nodisp http://5.79.70.19:80/4");
                 break;
        // THE GARDEN
        case 4 : system("ffplay -nodisp http://5.79.70.19:80/5");
                 break;
        // BASS DRIVE
        case 5:  system("ffplay -nodisp http://us-tx1.streams.bassdrive.com:9000");
                 break;
        // DANCE UK RADIO
        case 6:  system("ffplay -nodisp http://uk2.internet-radio.com:8024/");
                 break;
        // 1MIX RADIO
        case 7:  system("ffplay -nodisp http://51.15.177.152:8000/");
                 break;
        // TRANCE ATHENA
        case 8:  system("ffplay -nodisp http://cast.streams.ovh:8008/stream");
                 break;
        default: printf("Exiting...");
                 break;     
    }
    return 0;
}