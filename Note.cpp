//
// Created by ricca on 03/07/2024.
//

#include "Note.h"
#include <iostream>

Note::Note(const std::string &title, const std::string &text)
        : text(text), title(title), locked(false) {
}

void Note::setTitle(const std::string &newTitle) {
    if (!locked)
        title = newTitle;
    else
        std::cerr << "Impossible to change the title. The note is locked!" << std::endl;
}


void Note::setText(const std::string &newText) {
    if (!locked)
        text = newText;
    else
        std::cerr << "Impossible to change the text. The note is locked!" << std::endl;
}

void Note::Read() const {
    std::cout << Note::getTitle() << ":\n" << Note::getText() << std::endl;
}




