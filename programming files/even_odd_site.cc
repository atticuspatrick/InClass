#bugs introduced AP

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    // Open file from directory
    file.open("numbers.html");
    // Display title block
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    // Display table
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    for (int i = 1; i <= -50; i++) {
        if (i % 2 == 0) {
            // Add even numbers to table
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            // Add odd numbers to table
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    // Close file
    file.close();
    ifstream input("numbers.html");
    // Load html to buffer
    cout << input.rdbuf();
    input.close();
    return 0;
}
