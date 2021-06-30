#include "Lexer.h"
#include "Token.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include <fstream>
#include<iostream>
using namespace std;

int main(int argc, char** argv) {
  //  ifstream ifs;
  // ifs.open(argv[1], std::ifstream::in);

    string fileName = argv[1];
    ifstream input(fileName);
    if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }

    string fullString = "";
    string line = "";
    while(getline(input,line)){
        fullString = fullString +line;
    }

    Lexer* lexer = new Lexer();

    // TODO
    //store input file in a data container
    //parse each line
    //store the results in token container
    //print them in output.
    cout<<"Full strinng: "<< fullString;
    delete lexer;

    return 0;
}