#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>



using namespace std;

/**

k = hany rekurziv hivast vegezzen el

x1 - y1 - a haromszog elso pontjanak a kezdeti koordinatai

x2 - y2 - a haromszog masodik pontjanak kezdeti koordinatai

x3 - y3 - a haromszog harmadik pontjanak kezdeti koordinatai

*/

void sierpinski(int x1,int y1,int x2,int y2,int x3,int y3,int k)

{
 // a megadott koordin�t�k k�z�tt mindig ki kell rajzolni a 3 vonalat, elősz�r ezt tessz�k meg)
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);

 //ha tobb haromszoget kell meg kirajzolni, akkor rekurzivan hivjuk
 // a sierpinski fuggvenyt meg haromszor
    if (k > 1) {


	sierpinski(x1,y1,(x1+x3)/2,(y1+y3)/2,(x1+x2)/2,(y1+y2)/2,k-1);
	sierpinski(x2,y2,(x1+x2)/2,(y1+y2)/2,(x2+x3)/2,(y2+y3)/2,k-1);
	sierpinski(x3,y3,(x1+x3)/2,(y1+y3)/2,(x2+x3)/2,(y2+y3)/2,k-1);
	floodfill((x1+x2+x3)/3,(y1+y2+y3)/3,WHITE);

    }

}



int main()

{

    int a;

    cout << "a=";

    cin >> a;

    int gd,gm;

    gd = gm = 0;

    initgraph(&gd,&gm,"");

    setcolor(WHITE);

    setfillstyle(1,WHITE);

    sierpinski(0,479,639,479,320,0,a);

    cin >> a;

    return 0;

}
