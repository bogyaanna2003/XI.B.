#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#define n 10

using namespace std;


void quickSort(int tomb[], int balindex, int jobbindex){
    int i = balindex, j = jobbindex;
    int tampont= tomb[(balindex + jobbindex) / 2];
    while (i <= j){
      while (tomb[i] < tampont){
           i++;
      }
        while (tomb[j] > tampont){
           j--;
      }
        if (i <= j){
        swap(tomb[i], tomb[j]);
         i++;
         j--;

        }
        };
    if (balindex < j)
      quickSort(tomb, balindex, j);
    if (i < jobbindex)
      quickSort(tomb, i, jobbindex);

}
int main()
{
    int v[n];
    for(int i = 0; i<n; i++){
        cout<<"v["<<i<<"]=";
        cin >> v[i];
}
    quickSort(v, 0, n);
    for(int i = 0; i<n; i++){
        cout<<v[i]<< endl;
}
    return 0;

}
