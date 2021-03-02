#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float pi=3.1415;
 void Koch(int x1, int y1, float alfa, int xn, int yn, int n){
 if(n==0){
    line(x1, y1, xn, yn);
    return;
     }
     float x2,y2,x3,y3,x4,y4,x5,y5;
     float d=sqrt((xn-x1)*(xn-x1)+(yn-y1)*(yn-y1))/3.0;
     x2=x1+cos(alfa)*d;
     y2=y1+sin(alfa)*d;
    x3=x2+cos(alfa+pi/3)*d;
    y3=y2+sin(alfa+pi/3)*d;

    x4=x2+d*cos(alfa);
    y4=y2+d*sin(alfa);
    x5=xn;
    y5=yn;
Koch(x1, y1, alfa, x2, y2, n-1);
Koch(x2, y2, alfa+pi/3, x3, y3, n-1);
Koch(x3, y3, alfa-pi/3, x4, y4, n-1);
Koch(x4, y4, alfa, x5, y5, n-1);
 }
int main()
{
  int a;

    cout << "a=";

    cin >> a;

    int gd,gm;

    gd = gm = 0;

    initgraph(&gd,&gm,"");

    setcolor(GREEN);

    setfillstyle(1,GREEN);

    Koch(0,200,0,600,200,a);

    cin >> a;
    return 0;
}
