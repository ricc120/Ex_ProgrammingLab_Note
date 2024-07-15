//
// Created by ricca on 03/07/2024.
//

#include "Note.h"
#include <iostream>

Note::Note(const std::string &title, const std::string &text)
        : text(text), title(title), locked(false) {
}

bool Note::setTitle(const std::string &newTitle) {
    if (!locked)
        title = newTitle;
    else
        return false;
    return true;
}


bool Note::setText(const std::string &newText) {
    if (!locked)
        text = newText;
    else
        return false;
    return true;
}

std::string Note::toString() const {
    return Note::getTitle() + ":\n" + Note::getText();
}




