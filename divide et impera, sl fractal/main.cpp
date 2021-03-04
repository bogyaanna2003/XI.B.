#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void escher(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int n){
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
    if (n==0){
        return;
    }
    escher((x1+x2)/2,(y1+y2)/2,(x2+x3)/2,(y2+y3)/2,(x3+x4)/2,(y3+y4)/2,(x4+x1)/2,(y4+y1)/2,n-1);
}
int main()
{
    int a;
    cout <<"a=";
    cin >> a;
    int gd, gm;
    gd = gm = 0;
    initgraph(&gd,&gm,"");
    setcolor(RED);
    int x1=10, y1 = 50, x2 = 610, y2 = 50, x3 = 610, y3 = 350, x4 = 10, y4 = 350;
    escher(x1, y1, x2, y2, x3, y3, x4, y4, a);
    getch();
return 0;
}
//#include <graphics.h>
//#include <math.h>
//#include <stdlib.h>
//#include <iostream>
//using namespace std;
//void escher(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int n){
  //  line(x1, y1, x2, y2);
 //   line(x2, y2, x3, y3);
 //   line(x3, y3, x4, y4);
  //  line(x4, y4, x1, y1);
    //if (n==0){
    //  return;
    //}
    //escher((x1+x2)/2,(y1+y2)/2,(x2+x3)/2,(y2+y3)/2,(x3+x4)/2,(y3+y4)/2,(x4+x1)/2,(y4+y1)/2,n-1);
//}
//int main(){
  //    int a;
  //    cout <<"a=";
 //     cin >> a;
  //    int gd, gm;
  //    gd = gm = 0;
  //    initgraph(&gd,&gm,"");
  //    setcolor(RED);
  //    escher(100, 100, 400, 100, 400, 400, 100, 400, a);
  //    getch();
  //    return 0;}
