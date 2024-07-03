//
// Created by ricca on 03/07/2024.
//

#include "Note.h"
#include <iostream>

Note::Note(const std::string &title, const std::string &text, bool important)
: text(text) , title(title), locked(false), important(important) {
}

