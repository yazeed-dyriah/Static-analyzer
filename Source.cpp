#include <iostream>
#include <fstream>
#include<string>
using namespace std;


void ReadCodeFile(string fileName) {

    string line;

    string linesArray = { NULL };

    ifstream file(fileName);

    if (file.is_open()) {
        cout << "file is open\n";
        while (!file.eof()) {
            getline(file, line);
            cout << line << endl;
            linesArray.append(line);
        }
    }
    else
        cout << "file is not open";
    file.close();

}





 


int main()
{
    ReadCodeFile("eof.txt");

    return 0;


}


