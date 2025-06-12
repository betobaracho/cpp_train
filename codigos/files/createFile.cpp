#include<iostream>
#include<fstream>
#include<cstdlib>
using std::cout;
using std::ofstream;
using std::endl;
using std::ios;
using std::cerr;
using std::cin;

int main() {
    ofstream file("clients2.dat",ios::out); // Create a file named example.txt
    
    if(!file){
        cerr << "Error opening file for writing." << endl;
        return EXIT_FAILURE; // Exit if the file cannot be opened
    }

    cout<<"Digite a conta o nome e o saldo" << endl;
    int account;
    char nome[30];
    double balance;
    while(cin >> account >> nome >> balance) {
        file << account << " " << nome << " " << balance << endl; // Write data to the file
    }
    file.close(); // Close the file after writing
    
    return 0;
}
