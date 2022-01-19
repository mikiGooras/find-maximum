//
//  main.cpp
//  find maximum
//
//  Created by Michał GÓRNY on 19/01/2022.
//

#include <iostream>


using namespace std;


int counter;
int *range;
int maximum, minimum;

 

int main() {
    cout << "podaj ile liczb bedzie porównywanych ";
    cin >> counter ;
    range = new int [counter];
    for (int i =0; i<counter; i++){
        if (i==0){
            cout<< "podaj pierwszą liczbę";
            cin >> range[i];
            maximum=range[i];
            minimum=range[i];
        }else{
            cout << "podaj kolejną liczbę";
            cin >> range[i];
           if (maximum < range[i]){
                maximum=range[i];
            } else if (minimum> range[i]){
                minimum=range[i];
            }
            
            }
        }
    
    cout << " najwyższa wartość wynosi" << maximum << endl;
    cout << " najniższa wartość wynosi "<< minimum<< endl ;
    
    return 0;
}
