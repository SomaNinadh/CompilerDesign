#include <iostream>
#include <string>

using namespace std;

// Function to generate intermediate code for if-else statements
void generateIntermediateCodeIfElse(const string& condition, const string& trueBlock, const string& falseBlock = "") {
    cout << "Intermediate Code for if-else statement:" << endl;
    cout << "if (" << condition << ") {" << trueBlock << "}" << endl;
    if (!falseBlock.empty()) {
        cout << "else {" << falseBlock << "}" << endl;
    }
}

// Function to generate intermediate code for while loops
void generateIntermediateCodeWhile(const string& condition, const string& loopBlock) {
    cout << "Intermediate Code for while loop:" << endl;
    cout << "while (" << condition << ") {" << loopBlock << "}" << endl;
}

int main() {
    string ifCondition, ifTrueBlock, ifFalseBlock, whileCondition, whileBlock;

    // Get inputs for if-else statement
    cout << "Enter the condition for if-else statement: ";
    getline(cin, ifCondition);
    cout << "Enter the true block for if statement: ";
    getline(cin, ifTrueBlock);
    cout << "Enter the false block for else statement (press Enter if no else block): ";
    getline(cin, ifFalseBlock);

    // Generate intermediate code for if-else statement
    generateIntermediateCodeIfElse(ifCondition, ifTrueBlock, ifFalseBlock);

    cout << endl;

    // Get inputs for while loop
    cout << "Enter the condition for while loop: ";
    getline(cin, whileCondition);
    cout << "Enter the block for while loop: ";
    getline(cin, whileBlock);

    // Generate intermediate code for while loop
    generateIntermediateCodeWhile(whileCondition, whileBlock);

    return 0;
}
