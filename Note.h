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

public:
    explicit Note(const std::string &title, const std::string &text);

    bool setTitle(const std::string &newTitle);

    bool setText(const std::string &newText);

    void lock() {
        locked = true;
    }

    void unlock() {
        locked = false;
    }

    std::string getTitle() const {
        return title;
    }

    std::string getText() const {
        return text;
    }

    bool isLock() const {
        return locked;
    }

    std::string read() const;

};


#endif //EX_PROGRAMMINGLAB_NOTE_NOTE_H
