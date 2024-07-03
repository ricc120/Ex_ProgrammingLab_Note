//
// Created by ricca on 03/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_NOTE_H
#define EX_PROGRAMMINGLAB_NOTE_NOTE_H
#include <iostream>

class Note {
private:
    std::string title;
    std::string text;
    bool locked;
    bool important;

public:
    explicit Note(const std::string& title, const std::string& text, bool important = false);

    void setText(const std::string& newText) {
        if (!locked)
            text = newText;
        else
            std::cout << "Impossible to write. The note is locked!" ;
    }

    void setTitle(const std::string& newTitle) {
        if (!locked)
            title = newTitle;
    }

    void lock() {
        locked = true;
    }

    void unlock() {
        locked = false;
    }

    std::string getText() const {
        return text;
    }

    bool isLock() const {
        return locked;
    }

    bool isImportant() const {
        return important;
    }

};


#endif //EX_PROGRAMMINGLAB_NOTE_NOTE_H
