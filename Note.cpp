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
        title = "Impossible to write. The note is locked!" ;
}


void Note::setText(const std::string &newText) {
        if (!locked)
            text = newText;
        else
            text = "Impossible to write. The note is locked!" ;
}




