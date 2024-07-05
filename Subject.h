//
// Created by ricca on 04/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_SUBJECT_H
#define EX_PROGRAMMINGLAB_NOTE_SUBJECT_H
#include "Observer.h"

class Subject {
public:
    virtual void registerObserver(Observer* o) = 0;

    virtual void notifyObserver() const = 0;

    virtual void removeObserver(Observer* o) = 0;

    virtual ~Subject() = default;

};


#endif //EX_PROGRAMMINGLAB_NOTE_SUBJECT_H
