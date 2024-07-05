//
// Created by ricca on 05/07/2024.
//

#include "NoteCounter.h"
#include <iostream>

NoteCounter::NoteCounter(Collection *c) : collection(c) , notesCount(0) {
    collection->registerObserver(this);
}

void NoteCounter::update() {
    if (collection->getNotesCount() > notesCount)
        std::cout << "New note added! /*INTERFACE UPDATE*/" << std::endl;
    else
        std::cout << "Note deleted! /*INTERFACE UPDATE*/" << std::endl;
    notesCount = collection->getNotesCount();
}

NoteCounter::~NoteCounter() {
    collection->removeObserver(this);
}
