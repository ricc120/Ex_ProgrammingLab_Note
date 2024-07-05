#include <iostream>
#include "Note.h"
#include "Collection.h"
#include "NoteCounter.h"

int main() {
    Collection c("General");
    auto n1 = std::make_shared<Note>("Recipe", "...");
    auto n2 = std::make_shared<Note>("ToDo", "...");

    //Notify when the notes are added and removed
    NoteCounter noteCounter(&c);

    //Add notes in collection "General"
    c.addNote(n1);
    c.addNote(n2);

    //Remove from the collection the note "Recipe"
    c.removeNote("Recipe");

}
