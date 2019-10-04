/*Write a program that prints the temperature closest to 0 among input data. 
If two numbers are equally close to zero, positive integer has to be considered closest to zero 
(for instance, if the temperatures are -5 and 5, then display 5). 
Example
Input
5 - the number N numbers
1 -2 -8 4 5
Output
1
 */











#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int temp[n];
    int dupNum;
    
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        temp[i] = t;
        
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int smallAbs = temp[0];
    for(int i = 1; i < n; i++){
        if(smallAbs == 0 || temp[i] == 0){
            cout << 0 << endl;
            break;
        }
     if(abs(smallAbs) > abs(temp[i])){
      smallAbs = temp[i];   
     }
     if(abs(smallAbs) == abs(temp[i])){
         dupNum = temp[i];      
     }
    
    }
    
    if(dupNum){
        if(dupNum > 0){
        cout << dupNum;
        }else{
            cout << smallAbs;
        }
    }else{
    cout << smallAbs << endl;
    }
}




