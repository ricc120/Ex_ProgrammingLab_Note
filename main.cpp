#include <iostream>
#include "Note.h"
#include "Collection.h"
#include "NoteCounter.h"

int main() {
    Collection collection("General");
    Collection importantCollection;
    auto note1 = std::make_shared<Note>("Recipe", "...");
    auto note2 = std::make_shared<Note>("To Do", "...");
    auto note3 = std::make_shared<Note>("Gym", "...");

    //Notify when the notes are added and removed
    NoteCounter noteCounter(&collection);
    NoteCounter importantNoteCounter(&importantCollection);

    //Add notes in collection "General" and make note3 important
    collection.addNote(note1);
    collection.addNote(note2);
    collection.addNote(note3);
    importantCollection.addNote(note3);

    //Edited the text of note1 and printed on screen
    note1->setText("My new Apple Crumble recipe.");
    note1->Read();

    //Lock note1. Unlock it for future updates
    note1->lock();

    //Remove from the collection the note "To DO"
    collection.removeNote("To Do");

}
