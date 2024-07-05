//
// Created by ricca on 04/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
#define EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
#include <iostream>
#include "Note.h"
#include <memory>
#include <vector>
#include <list>
#include "Observer.h"
#include "Subject.h"

class Collection : public Subject{
private:
    std::string name;
    std::vector<std::shared_ptr<Note>> notes;
    int notesCount;
    std::list<Observer*> observers;

public:
    explicit Collection(const std::string& name);

    std::string getName() const {
        return name;
    }

    void addNote(std::shared_ptr<Note> notes);

    void removeNote(const std::string& title);

    size_t getNotesCount() const {
        return notes.size();
    }

    void registerObserver(Observer *o) override {
        observers.push_back(o);
    };

    void notifyObserver() const override {
        for (auto elements: observers)
            elements->update();
    };

    void removeObserver(Observer *o) override {
        observers.remove(o);
    };

};


#endif //EX_PROGRAMMINGLAB_NOTE_COLLECTION_H
