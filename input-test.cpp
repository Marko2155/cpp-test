#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string input;
	while (true) {
		cout << "C++> ";
		cin >> input;
		if (input == "exit") {
			break;
		} else if (input == "writetofile") {
			string filename, contents;
			cout << "Type the name of the file: ";
			cin >> filename;
			cout << "Type the contents of the file: ";
			cin >> contents;
			ofstream filestream(filename);
			filestream << contents;
			filestream.close();
		} else if (input == "openfile") {
            string filename, contents;
            cout << "Type the name of the file: ";
            cin >> filename;
            ifstream filestream(filename);
            while (getline(filestream, contents)) {
                cout << contents << endl;
            }
            filestream.close();
        } else {
            cout << "Unrecognized command." << endl;
        }
	}
	return 0;
}
