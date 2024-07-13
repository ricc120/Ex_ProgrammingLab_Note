//
// Created by ricca on 05/07/2024.
//
#include "gtest/gtest.h"
#include "../NoteCounter.h"

TEST(NoteCounter, Constructor) {
    Collection c1("Test Collection I°");
    Collection c2("Test Collection II°");
    Collection c3;
    NoteCounter test1(&c1);
    NoteCounter test2(&c2);
    NoteCounter test3(&c3);
    auto n1 = std::make_shared<Note>("Test Title I°", "Test Text I°");
    auto n2 = std::make_shared<Note>("Test Title II°", "Test Text II°");
    auto n3 = std::make_shared<Note>("Test Title III°", "Test Text III°");
    c1.addNote(n1);
    c2.addNote(n2);
    c3.addNote(n1);

    ASSERT_EQ(test1.getNotesCount(), 1);
    ASSERT_EQ(test2.getNotesCount(), 1);
    ASSERT_EQ(test3.getNotesCount(), 1);


    c1.removeNote("Test Title I°");
    c2.removeNote("Test Title II°");
    c3.removeNote("Test Title I°");

    ASSERT_EQ(test1.getNotesCount(), 0);
    ASSERT_EQ(test2.getNotesCount(), 0);
    ASSERT_EQ(test3.getNotesCount(), 0);
}