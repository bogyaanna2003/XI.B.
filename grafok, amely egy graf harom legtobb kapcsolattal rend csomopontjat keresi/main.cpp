#include <iostream>
#include <fstream>

using namespace std;
int v[100][100];
int n;
bool van(int x, int y){
if(v[x][y]>0){
    return true;
}
return false;
}

int csomopontokszama(int csomopont){
int S=0;
for(int i=0; i<n;i++){
    S=S+v[i][csomopont];
    return S;
    }
}
for(int i=1;i<n+1;i++){
        cs[i]=i;
}
 for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(csomopontokszama(v[i])<csomopontokszama(v[j])){
                int aux=cs[i];
                cs[i]=cs[j];
                cs[j]=cs[i];
            }
        }
    }
int main(){
int n=8;
ifstream in("input.txt");
ofstream out("output.txt");
  int a[10][10];
  for(int i=1; i<n+1; i++){
    for(int j=1; j<n+1;j++){
        a[i][j]=0;
  }
}
a[1][2]=1;
a[2][1]=1;
a[1][6]=1;
a[2][3]=1;
a[2][4]=1;
a[3][4]=1;
a[4][8]=1;
a[5][6]=1;
a[5][7]=1;
a[5][8]=1;
for(int i=1; i<n+1;i++){
    for(int j=i+1; j<n+1;j++){
        a[j][i]=a[i][j];
    }
}
for(int i=1;i<n+1;i++){
    for(int j=1; j<n+1; j++){
        cout<<a[i][j]<<" ";
    }
    cout<< endl;
}
    return 0;
}
