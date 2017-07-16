#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int x;
    cout << "1: CLASSIX [https://www.intergalactic.fm/]\n";
    cout << "2: FMMAIN [https://www.intergalactic.fm/]\n";
    cout << "3: THE DREAM [https://www.intergalactic.fm/]\n";
    cout << "4: THE GARDEN [https://www.intergalactic.fm/]\n";
    cout << "5: BASS DRIVE [http://www.bassdrive.com/]\n";
    cout << "..: ";
    cin >> x;
    switch (x)
    {
        case 1 : system("ffplay -nodisp http://5.79.70.19:80/2");
                 break;
        case 2 : system("ffplay -nodisp http://5.79.70.19:80/1");
                 break;
        case 3 : system("ffplay -nodisp http://5.79.70.19:80/4");
                 break;
        case 4 : system("ffplay -nodisp http://5.79.70.19:80/5");
                 break;
        case 5:  system("ffplay -nodisp http://us-tx1.streams.bassdrive.com:9000");
        default: cout << "Exiting..\n";
                 break;     
    }
    return 0;
}