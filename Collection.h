//
// Created by ricca on 04/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
#define EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
#include <iostream>
#include "Note.h"
#include <memory>
#include <vector>
#include <unordered_map>

class Collection {
private:
    std::string name;
    std::vector<std::shared_ptr<Note>> notes;
    std::unordered_map<std::string, int> noteCounts;

public:
    explicit Collection(const std::string& name);

    std::string getName() const {
        return name;
    }

    void addNote(std::shared_ptr<Note> notes);

    void removeNote(const std::string& title);

    int getNoteCount() const {
        return notes.size();
    }
};


#endif //EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
