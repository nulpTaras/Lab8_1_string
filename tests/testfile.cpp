#include "/Users/tarasneridnyi/Desktop/Lab8_1_string/src/functions.cpp"
#include <gtest/gtest.h>

TEST(TEST1, TestingCount) {
    std::string testStr1 = "one,two,three";
    EXPECT_EQ(Count(testStr1, 0), 2); // 2 коми

    std::string testStr2 = "no commas here";
    EXPECT_EQ(Count(testStr2, 0), 0); // Жодної коми

    std::string testStr3 = ",leading,and,trailing,";
    EXPECT_EQ(Count(testStr3, 0), 4); // 4 коми

    std::string testStr4 = "";
    EXPECT_EQ(Count(testStr4, 0), 0); // Порожній рядок
}

TEST(TEST2, TestingChange) {
    std::string testStr1 = "one,two,three";
    std::string result1;
    EXPECT_EQ(Change(testStr1, 0, result1), "one**two**three");

    std::string testStr2 = "no commas here";
    std::string result2;
    EXPECT_EQ(Change(testStr2, 0, result2), "no commas here");

    std::string testStr3 = ",leading,and,trailing,";
    std::string result3;
    EXPECT_EQ(Change(testStr3, 0, result3), "**leading**and**trailing**");

    std::string testStr4 = "";
    std::string result4;
    EXPECT_EQ(Change(testStr4, 0, result4), "");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
