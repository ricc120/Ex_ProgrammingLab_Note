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

    void setTitle(const std::string& newTitle);

    void setText(const std::string& newText);

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

    bool isImportant() const {
        return important;
    }

};


#endif //EX_PROGRAMMINGLAB_NOTE_NOTE_H
