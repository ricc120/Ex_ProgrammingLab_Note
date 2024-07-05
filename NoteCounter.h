//
// Created by ricca on 05/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_NOTECOUNTER_H
#define EX_PROGRAMMINGLAB_NOTE_NOTECOUNTER_H
#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "Collection.h"

class NoteCounter : public Observer {
private:
    int notesCount;
    Collection* collection;

public:
    int getNotesCount() const {
        return notesCount;
    }

    explicit NoteCounter(Collection *c);

    void update() override;

    ~NoteCounter() override;

};


#endif //EX_PROGRAMMINGLAB_NOTE_NOTECOUNTER_H
