//
// Created by ricca on 04/07/2024.
//

#ifndef EX_PROGRAMMINGLAB_NOTE_OBSERVER_H
#define EX_PROGRAMMINGLAB_NOTE_OBSERVER_H

class Observer {
public:
    virtual void update() = 0;

    virtual ~Observer() = default;

};


#endif //EX_PROGRAMMINGLAB_NOTE_OBSERVER_H
