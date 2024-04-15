#include <iostream>
#include <string.h>
using namespace std;



int main(int argc, char* argv[], char* envp[])
{
    bool play = true;
    int i =0 , j = 0;
    int x, y;
    int sqr;
    int hits = 0;
    int fehlVersuche = 0;

    char map[5][5] = {
        {0, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 1, 1, 1}
    };


    while (play)
    {
        cout << " \n      round " << hits + fehlVersuche << "\n \n";
        for (i; i < 5; i++)
        {
            cout << 5-i << " ";
            for (j = 0; j < 5; j++)
            {  
                if(map[i][j] == 'x'){
                    cout << " x ";
                }else cout << " 0 ";
            }

            cout << "\n";

            j = 0;
        }
        
        i = 0;

        cout << "   1  2  3  4  5 \n \n";

        
        cout << " geben Sie eine Koordinaten  z.B \"2 2\" zum boben ein !! : ) \n";

        cin >> x;
        cin >> y;

        if(x > 5 || y > 5){   
            cout << " falsche Koordinaten \n";
            continue;
        }

        sqr = map[5-y][x-1];

        if(sqr){
            map[5-y][x-1] = 'x';
            cout << "    HIIIIIIIIT !!!! Nice \n";
            hits +=1;
        }else{  
            cout << "    Try Again!!! \n";
            fehlVersuche +=1;
        }
        
    }
    
}


