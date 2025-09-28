// COMSC-210 | Lab 14 | Amrutha Sriprasana
// Made w/ VSCode
#include <iostream>

using namespace std;

// Color Class: 1 constructor, 4 vars, 3 setters, 3 getters, 1 display function
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
        int getRed() const {return red;}
        int getGreen() const {return green;}
        int getBlue() const {return blue;}
        void setRed(int r) {red = r;}
        void setGreen(int g) {green = g;}
        void setBlue(int b) {blue = b;}
        void print();
};

// Constructor
Color::Color(string n){
    name = n;
}

// Display function
void Color::print(){
    cout << "Color: " << name << endl;
    cout << "> Red: " << red << endl;
    cout << "> Blue: " << blue << endl;
    cout << "> Green: " << green << endl << endl;
}

// Creates 4 Color objects, populates with setters, uses print() method to display color info
int main(){
    Color c1 = Color("Lavender");
    c1.setRed(207);
    c1.setGreen(207);
    c1.setBlue(232);

    Color c2 = Color("Navy Blue");
    c2.setRed(0);
    c2.setGreen(0);
    c2.setBlue(128);

    Color c3 = Color("Orange");
    c3.setRed(255);
    c3.setGreen(131);
    c3.setBlue(0);

    Color c4 = Color("Mint Green");
    c4.setRed(152);
    c4.setGreen(255);
    c4.setBlue(152);

    c1.print();
    c2.print();
    c3.print();
    c4.print();
}