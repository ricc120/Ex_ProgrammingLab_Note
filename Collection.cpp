//
// Created by ricca on 04/07/2024.
//

#include "Collection.h"
#include "Note.h"
#include <iostream>

Collection::Collection() : name("Important Notes"), important(true), notesCount(0) {
}

Collection::Collection(const std::string &name) : name(name), important(false), notesCount(0) {
}

void Collection::addNote(std::shared_ptr<Note> notes) {
    this->notes.push_back(notes);
    notesCount++;
    notifyObserver();
}

void Collection::removeNote(const std::string &title) {
    auto it = notes.begin();
    while (it != notes.end()) {
        if ((*it)->getTitle() == title)
            notes.erase(it);
        else
            it++;
    }
    notifyObserver();
}

std::vector<std::shared_ptr<Note>> Collection::findNote(const std::string &title) const {
    std::vector<std::shared_ptr<Note>> findNotes;
    for (auto elements: notes) {
        if (elements->getTitle() == title)
            findNotes.push_back(elements);
    }
    return findNotes;
}


