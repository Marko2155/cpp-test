#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

void myFunction(string fname = "Betty");

class MyClass {
public:
    int myNum;
    string myString;
    int myFunction();
protected:
    int myProcNum;
};

class NewClass: public MyClass {
    public:
        string poop;
};

int plusMath(int x, int y);

void swapNums(int &x, int &y);

void itemsInIntArray(int numbers[]);

int main() {
    cout << "Hello, C++!" << endl;
    cout << "Tests will now commence." << endl;
    int myNum;
    myNum = 5;
    cout << myNum << endl;
    int x = 1, y = 2, w = 3, h = 4;
    cout << x + y + w + h << endl;
    x = y = w = h = 5;
    cout << x + y + w + h << endl;
    cout << "Type a number: ";
    cin >> myNum;
    cout << "Your number is: " << myNum << endl;
    string str = "hi";
    cout << str << endl;
    cout << "The length of variable 'string' is: " << str.length() << endl;
    cout << "First character of variable 'string' is: " << str[0] << endl;
    str[0] = 'f';
    cout << str << endl;
    cout << "Type your name here: ";
    str = "";
    cin >> str;
    cout << "Your name is: " << str << endl;
    cout << sqrt(144) << endl;
    cout << sin(5) << endl;
    cout << "Write something and C++ will tell if it is bigger than 20 or not: ";
    cin >> myNum;
    str = (myNum > 20) ? to_string(myNum) + " is bigger than 20. " : to_string(myNum) + " is smaller than 20.";
    cout << str << endl;
    cout << "Type in 1, 2 or anything else.";
    cin >> myNum;
    switch (myNum) {
        case 1:
            cout << "You typed one, nice." << endl;
            break;
        case 2:
            cout << "You typed two, nice." << endl;
            break;
        default:
            cout << "Elephant." << endl;
            break;
    }
    while (true) {
        cin >> str;
        if (str == "elephant") {
            cout << "elephant." << endl;
            break;
        } else {
            cout << "no. elephant." << endl;
        }
    }
    cout << "Pick a random number between 1 and 100, then tell it to me. ";
    cin >> myNum;
    if (myNum > 0 && myNum < 101) {
        cout << "Thanks for the number " << myNum << "." << endl;
    } else {
        cout << "HEY! " << myNum << " IS NOT IN THE RANGE OF 1-100 OR IT IS NOT A NUMBER! SO IT IS AN ILLEGAL NUMBEEEEERRRR!!!!!!!" << endl;
    }
    myNum = 0;
    cout << "do {} while() loop:" << endl;
    do {
        myNum += 1;
        cout << myNum << endl;
    } while (myNum < 101);
    cout << "for() {} loop:" << endl;
    for (int i = 0; i < 101; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << endl;
    }
    string names[] = {"John", "James", "Rob", "Carl"};
    cout << names[2] << endl;
    names[2] = "Paul";
    cout << names[2] << endl;
    cout << sizeof(names) / sizeof(int) << endl;
    string letters[2][4] = {
            {"A", "B", "C", "D"},
            {"E", "F", "G", "H"}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << endl;
        }
    }

    struct {
        int myNum = 4;
        string myString = "hi";
    } myStruct;
    cout << "Int: " << myStruct.myNum << ", String: " << myStruct.myString << endl;
    myStruct.myNum = 5;
    myStruct.myString = "hello";
    cout << "Int: " << myStruct.myNum << ", String: " << myStruct.myString << endl;
    string favoriteFood = "Pizza";
    string &meal = favoriteFood;

    cout << meal << endl;
    cout << &favoriteFood << endl;
    string* ptr = &meal;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = "Spaghetti";
    cout << *ptr << endl;
    myFunction("Robert");
    myFunction();
    int output = plusMath(5, 3);
    cout << output << endl;
    int fNum = 5;
    int sNum = 6;
    cout << "Before swap: " << fNum << ", " << sNum << endl;
    swapNums(fNum, sNum);
    cout << "After swap: " << fNum << ", " << sNum << endl;
    int numbers[] = {1, 2, 3, 4, 5};
    itemsInIntArray(numbers);
    MyClass myClass;
    myClass.myNum = 5;
    myClass.myString = "bye";
    myClass.myFunction();
    cout << "Number: " << myClass.myNum << ", String: " << myClass.myString << endl;
    NewClass newClass;
    newClass.myNum = 6;
    newClass.myString = "hi";
    newClass.myFunction();
    cout << "Number: " << newClass.myNum << ", String: " << newClass.myString << endl;
    string myText;
    ofstream MyWriteFile("filename.txt");
    MyWriteFile << "Hi!";
    MyWriteFile.close();
    ifstream MyOpenFile("filename.txt");
    while(getline(MyOpenFile, myText)) {
        cout << myText;
    }
    MyOpenFile.close();
    return 0;
}

void myFunction(string fname) {
    cout << "This is my function!" << endl;
    cout << fname << " Johnson" << endl;
}

void itemsInIntArray(int numbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }
}

int plusMath(int x, int y) {
    return x + y;
}

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
    z = 0;
}

int MyClass::myFunction() {
    cout << "This is my class function!" << endl;
    myProcNum = 5;
    return myProcNum;
}
