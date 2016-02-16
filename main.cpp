/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mxw13
 *
 * Created on February 13, 2016, 4:24 PM
 */

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Get, store, and output a team name
    string teamName;
    srand(time(0));
    int randNum;
    bool rollAgain = true;
    
    // Get, store, and output a team name
    cout << "What's your team name?" << endl;
    cin >> teamName;
    cout << teamName << endl;
    
    // loop through the game until the user stops rolling
    do {
    // Roll a die using random number generator and output that number
    randNum = (rand() % 6) + 1;
    cout << teamName << " rolled: " << randNum << endl;
    
    // Determine if valid dice roll
    if(randNum < 1 || randNum > 6){
        cout << 'N' << endl;
    }else{
        cout << 'Y' << endl;
    }
    
    
    // Game code:
    
    // Squares dice roll
    randNum = pow(randNum, 2);// 1 4 9 16 25 36 49 64 81
    
    switch(randNum){
        
        case 36 :
            cout << "Go back " << sqrt(randNum) << endl;
            break;
        case 25:
            cout << "Move forward " << (randNum / 3)<< " spaces" << endl;
            break;
        case 16:
            cout << "Move forward " << randNum << " spaces"  << endl;
            break;
        case 9:
            cout << teamName << " give up your turn" << endl;
            break;
        case 4:
        case 1:
            cout << "What command was used to output this statement" << endl;
            break;
        default:
            cout << teamName << " give up your turn" << endl;
            break;
            
    }
    // ask the user to continue by entering a 1 or 0
    cout << "Roll again? Enter 1 to continue" << endl ;
    cin >> rollAgain;
    }while(rollAgain);
    
    return 0;
}

