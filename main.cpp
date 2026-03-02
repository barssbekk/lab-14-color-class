// COMSC-210 | Lab 14 | Barsbek
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Color {
private:
    int m_red{};
    int m_green{};
    int m_blue{};
public:
    // Getter
    int getRed() const { return m_red; }
    int getGreen() const { return m_green; };
    int getBlue() const { return m_blue; };
    // Setter
    void setRed(const int red) { m_red = red; }
    void setGreen(const int green) { m_green = green; }
    void setBlue(const int blue) { m_blue = blue; }

    void print() const {
        cout << "Red: " << m_red << '\n';
        cout << "Green: " << m_green << '\n';
        cout << "Blue: " << m_blue << '\n';
    }
};
int main() {
    vector<Color> vecColor{};
    fstream fileInput{"data.txt"};
    if (!fileInput) {
        cerr << "File not found";
        return 1;
    }
    return 0;
}