#include <iostream>
#include <vector>

using namespace std;


int ermek[5] = {100, 50, 10, 5, 1};
int N = 5;
int megoldasok_szama = 0;
bool lehet(int S, int temposszeg, int erme){
if(temposszeg+erme> S){
    return false;
}
    return true;
}

void kiir(vector<int> megoldas){
    for(int index = 0; index<megoldas.size(); index++){
        cout << megoldas[index] << " ";
    }
    cout << endl;
}
void backtrack(int S, int temposszeg, int index, vector<int> jelenlegi_megoldas){
    if (temposszeg == S) {
        megoldasok_szama++;
        kiir(jelenlegi_megoldas);
        return;
    }

    for(int tempindex = index; tempindex < N; tempindex++){
        if (lehet(S, temposszeg, ermek[tempindex])){
    vector<int> temp_jelenlegi_megoldas = jelenlegi_megoldas;
             temp_jelenlegi_megoldas.push_back(ermek[tempindex]);
             int temp_temposszeg = temposszeg;
             temp_temposszeg += ermek[tempindex];
             backtrack(S, temposszeg+ermek[tempindex], tempindex, temp_jelenlegi_megoldas);
        }
    }


    return;
}

int main()
{
    int S;
    cout << "Kerem az osszeget" << endl;
    cin >> S;
    vector<int> megoldas;
    //for(int i=0; i<N; i++){
    backtrack(S, 0, 0, megoldas);
    //}
    cout << "osszesen  " << megoldasok_szama << " van";

    return 0;
}
