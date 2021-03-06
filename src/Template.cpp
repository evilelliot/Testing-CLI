#include "Template.hpp"
#include <iostream>
#include <string>
using namespace std;

void Template::help(){
    cout << "usage: CLI-Test [options]" << endl;
    cout << "-h | -H | help  Shows a help message." << endl;
    cout << "-v | -V | version  Shows the program's current version." << endl;
    cout << "-c | -C | credits  Shows the author's information." << endl;
    cout << "-g | -G | greetings  [some message] (-t int) Show's a message, turn on -t to repeat the message n times." << endl;
}
void Template::version(){
    cout << "CLI-Test 1.0.1" << endl;
}
void Template::credits(){
    cout << "Made by: Alberto Ocaranza (fevil)" << endl;
    cout << "https://github.com/evilelliot" << endl;
}
void Template::greetings(string data){
    cout << data << endl;
}
void Template::greetings(string data, int times){
    if(times > 100){
        cout << "You can't just fucken spam inside a goddamn CLI program you prick >:(" << endl;
    }else{
        for(int i = 0; i < times; i++){
            cout << data << endl;
        }
    }
}