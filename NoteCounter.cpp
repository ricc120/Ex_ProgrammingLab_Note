//
// Created by ricca on 05/07/2024.
//

#include "NoteCounter.h"
#include <iostream>

NoteCounter::NoteCounter(Collection *c) : collection(c), notesCount(0) {
    collection->registerObserver(this);
}

void NoteCounter::update() {
    if (collection->getNotesCount() > notesCount)
        if (collection->isImportant())
            std::cout << "New note added to " << collection->getName() << " ! /*INTERFACE UPDATE*/" << std::endl;
        else
            std::cout << "New note added to collection: " << collection->getName() << " ! /*INTERFACE UPDATE*/"
                      << std::endl;
    else if (collection->isImportant())
        std::cout << "Note deleted from " << collection->getName() << " ! /*INTERFACE UPDATE*/" << std::endl;
    else
        std::cout << "Note deleted from collection: " << collection->getName() << " ! /*INTERFACE UPDATE*/"
                  << std::endl;
    notesCount = collection->getNotesCount();
}

NoteCounter::~NoteCounter() {
    collection->removeObserver(this);
}
