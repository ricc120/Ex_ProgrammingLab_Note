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
    test.setTitle("New Test Title");
    test.setText("New Test Text");

    EXPECT_EQ(test.getTitle(), "New Test Title");
    EXPECT_EQ(test.getText(), "New Test Text");

    test.lock();
    test.setTitle("New New Test Title");
    test.setText("New New Test Text");

    EXPECT_EQ(test.getTitle(), "New Test Title");
    EXPECT_EQ(test.getText(), "New Test Text");
}


