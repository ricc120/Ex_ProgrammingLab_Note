//
// Created by ricca on 03/07/2024.
//
#include "gtest/gtest.h"
#include "../Note.h"

TEST(Note, Constructor) {
    Note test("Test Title", "Test Text");

    ASSERT_EQ(test.getTitle(), "Test Title");
    ASSERT_EQ(test.getText(), "Test Text");
    ASSERT_FALSE(test.isLock());

    test.lock();

    ASSERT_TRUE(test.isLock());
}

TEST(Note, SetTextWhenLocked) {
    Note test("Test Title", "Test Text");
    ASSERT_TRUE(test.setTitle("New Test Title"));
    ASSERT_TRUE(test.setText("New Test Text"));

    ASSERT_EQ(test.getTitle(), "New Test Title");
    ASSERT_EQ(test.getText(), "New Test Text");

    test.lock();
    ASSERT_FALSE(test.setTitle("New New Test Title"));
    ASSERT_FALSE(test.setText("New New Test Text"));

    ASSERT_EQ(test.getTitle(), "New Test Title");
    ASSERT_EQ(test.getText(), "New Test Text");
}

TEST(Note, ToString) {
    Note test("Test Title", "Test Text");
    ASSERT_EQ(test.toString(), "Test Title:\nTest Text");
}


