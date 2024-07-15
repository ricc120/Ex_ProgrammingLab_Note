//
// Created by ricca on 04/07/2024.
//
#include "gtest/gtest.h"
#include "../Collection.h"

TEST(Collection, Constructor) {
    Collection test("Test Collection");

    ASSERT_EQ(test.getName(), "Test Collection");
}

TEST(Collection, FindNote) {
    Collection test("Test Collection");
    auto n1 = std::make_shared<Note>("Test Title I°", "Test Text I°");
    auto n2 = std::make_shared<Note>("Test Title II°", "Test Text II°");
    auto n3 = std::make_shared<Note>("Test Title I°", "Test Text III°");

    test.addNote(n1);
    test.addNote(n2);
    test.addNote(n3);
    auto findNotes = test.findNote("Test Title I°");

    ASSERT_EQ(findNotes.size(), 2);
    ASSERT_EQ(findNotes[0]->getTitle(), "Test Title I°");
    ASSERT_EQ(findNotes[1]->getTitle(), "Test Title I°");

    findNotes = test.findNote("Test Title II°");

    ASSERT_EQ(findNotes.size(), 1);
    ASSERT_EQ(findNotes[0]->getTitle(), "Test Title II°");

    findNotes = test.findNote("Test Title III°");

    ASSERT_TRUE(findNotes.empty());
}

TEST(Collection, GetNotesCount) {
    Collection test1("Test Collection I°");
    Collection test2("Test Collection II°");
    auto n1 = std::make_shared<Note>("Test Title I°", "Test Text I°");
    auto n2 = std::make_shared<Note>("Test Title II°", "Test Text II°");
    auto n3 = std::make_shared<Note>("Test Title III°", "Test Text III°");

    test1.addNote(n1);
    test2.addNote(n2);
    test1.addNote(n3);
    test1.addNote(n2);

    ASSERT_EQ(test1.getNotesCount(), 3);
    ASSERT_EQ(test2.getNotesCount(), 1);

    test1.removeNote("Test Title I°");
    test2.removeNote("Test Title II°");
    test1.removeNote("Test Title II°");

    ASSERT_EQ(test1.getNotesCount(), 1);
    ASSERT_EQ(test2.getNotesCount(), 0);
}