//
// Created by ricca on 04/07/2024.
//

#include "Collection.h"
#include <iostream>
#include <algorithm>

Collection::Collection(const std::string &name) : name(name) , noteCounts(0) {
}

void Collection::addNote(std::shared_ptr<Note> notes) {
    this->notes.push_back(notes);
    noteCounts[getName()]++;
}

void Collection::removeNote(const std::string &title) {
    auto it = noteCounts[title];
    this->notes.erase(notes.begin() + it);
}


