#include <iostream>
#include "Note.h"

int main() {
    Note n1("Recipe", "...");

    std::cout << "Text: " << n1.getText() << std::endl;
    n1.setText("Tuna Salad!");

    std::cout << "Text: " << n1.getText() << std::endl;
    n1.lock();

    if (n1.isLock())
        std::cout << "NOTE LOCKED\nImpossible to change the text." << std::endl;
    else
        std::cout << "/* Writing text... */" << std::endl;

}
