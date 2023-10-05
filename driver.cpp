//Programming Project 1 - Due 10.05.2023
//Computer Science 219 - Seciton 1001
//Author - Samuel Mouradian


#include <iostream>
#include <fstream>
using namespace std;


#define FILENAME "Programming-Project-1.txt"
#define MAXLINE 10


string readHex(ifstream&, char);

int main(){
    ifstream txtFile;
    txtFile.open(FILENAME);

    for(int i = 0; i < MAXLINE; i++){
        if(txtFile.good()){

            long int hexVal1, hexVal2;
            string operand;

            txtFile >> operand;
            txtFile >> hex >> hexVal1;
            txtFile >> hex >> hexVal2;

            cout << operand << "        0x" << hex << hexVal1 << "       0x" << hex << hexVal2 << endl;

            cout << "Result:    0x" << hex << hexVal1 + hexVal2 << endl << endl;
        }
    }
    txtFile.close();
    return 0;
}

string readHex(ifstream& hexFile, char end){
    string tempHex;
    getline(hexFile, tempHex, end);

    return tempHex;
}