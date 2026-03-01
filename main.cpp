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
};
int main() {
    Color myColor{};
    cout << myColor.getBlue();
    return 0;
}