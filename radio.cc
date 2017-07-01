// Internet radio interface for ffplay.

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int x;
    cout << "Radio select..\n";
    cout << "1: CLASSIX = http://5.79.70.19:80/2\n";
    cout << "2: FMMAIN = http://5.79.70.19:80/1\n";
    cout << "3: THE DREAM = http://5.79.70.19:80/4\n";
    cout << "4: THE GARDEN = http://5.79.70.19:80/5\n";
    cout << "Please enter the corresponding number.. ";
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
        default: cout << "Exiting..\n";
                 break;     
    }
    return 0;
}