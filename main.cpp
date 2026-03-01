// COMSC-210 | Lab 14 | Barsbek
#include <iostream>

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
        
    }
};
int main() {
    Color myColor{};
    myColor.setRed(2);
    cout << myColor.getBlue();
    cout << myColor.getRed();
    return 0;
}