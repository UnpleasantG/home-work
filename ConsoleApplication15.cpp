#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string last_name;
    string first_name;
};

vector <string> open_file(const string& path)
{
    ifstream file;
    file.open(path);
    vector <string> result;
    string line;
    while (getline(file, line))
    {
        result.push_back(line);
    }
    file.close();

    return result;
}

void split(const string& line, char delim, Person )
{

}

int main()
{
    
}