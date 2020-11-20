#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()

{
int k=0,i=0;
    fstream file("input.txt");
    string token,line,keres;
    cout<<"Kerem irja be a szot amit keres:";
//beolvassuk a keresett szot
    cin>>keres;
    if(file.is_open()){
//amig van uj sor, addig olvassunk
        while(getline(file,line)){
//megnezzuk az elso elofordulasi helyet a keres string nek a sorban
		size_t talalat=line.find(keres);
//ha a string megvan, akkor amig megtalalja, keressen tovabb
		while(talalat!=string::npos){
          talalat=line.find(keres,talalat+1);

			//noveljuk a k erteket
			k++;
} }
        cout<<"A keresett szo" << keres << " " << k << " alkalommal fordul elo";
}else{
cout << "nem sikerult megnyitni a filett";
}
return 0;
}
 while(fin1 >> szo){
        for(int j=0; j<i; j++){
            if(szo == kovetelmeny[j]){
            db[j]++;
            }
        }

    }
