/*
ID: #######
TASK: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    string s1, s2;
    fin >> s1 >> s2;

    int product1 = 1, product2 = 1;

    for(int i = 0; i < s1.length(); i++){
        int x = s1[i] - 64;
        product1 *= x;
    }

    for(int i = 0; i < s2.length(); i++){
        int x = s2[i] - 64;
        product2 *= x;
    }

    product1 = product1 % 47;
    product2 = product2 % 47;

    if(product1 == product2){
        fout << "GO\n";
    }else{
        fout << "STAY\n";
    }

    return 0;
}
