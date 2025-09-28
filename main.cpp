#include <iostream>

using namespace std;

// Color Class: 1 constructor, 3 vars, 3 setters, 3 getters, display function
class Color{
    private:
        int red;
        int green;
        int blue;
        // name var added to differentiate each color
        string name;

    public:
        // Constructor initializes name
        Color(string n);
        // Inline defs for setters and getters since only one line
        int getRed() const {return red;};
        int getGreen() const {return green;};
        int getBlue() const {return blue;};
        int setRed(int r) {red = r;};
        int setGreen(int g) {green = g;};
        int setBlue(int b) {blue = b;};
        void print();
};

// Constructor
Color::Color(string n){
    name = n;
}

// Display function
void Color::print(){
    // use get for info
}

int main(){
    // make many color objects and display them w/ print()
}