/**
* Author: Alberto Ocaranza
*/
#include "src/Template.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]){
    // Importing a testing class template
    Template t;
    
    // If argc equals 1, then no argument exists
    if(argc == 1){
        cout << "Check -h for help!" << endl;
    }else{
        // Converting argv char to an string argList (easier comparison)
        std::vector<std::string> argList;
        for(int i=1;i<argc;i++){
            argList.push_back(argv[i]);
        }
        // Parsing commands
        if(argList[0] == "-h" || argList[0] == "-H" || argList[0] == "help"){
            t.help();
        }else if(argList[0] == "-v"  || argList[0] == "-V" || argList[0] == "version"){
            t.version();    
        }else if(argList[0] == "-c"  || argList[0] == "-C" || argList[0] == "credits"){
            t.credits();
        }else if(argList[0] == "-g"  || argList[0] == "-G" || argList[0] == "greetings"){
            if(argc == 1){ 
                cout << "Warning: you must provide a message to print!" << endl;
            }else if(argc == 5){
                if(argList[2] == "-t"){ 
                    int times = stoi(argList[3]);
                    t.greetings(argList[1], times);
                }
            }else if(argc == 3){
                t.greetings(argList[1]);
            }
        }
    }
    return 0;
}