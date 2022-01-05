#include <vector>
#include <gtest/gtest.h>

#include "find.cpp"

TEST(FindLastOccurrenceTests, noOccurrence) {
    EXPECT_EQ(-1, findLastOccurrence("Hello World", '\n'));
}

TEST(FindLastOccurrenceTests, doubleOccurrence) {
    EXPECT_EQ(7, findLastOccurrence("Hello World", 'o'));
}

TEST(FindLastOccurrenceTests, emptyString) {
    EXPECT_EQ(-1, findLastOccurrence("", 'o'));
}

TEST(FindLastOccurrenceTests, occurrenceOnBoundary) {
    EXPECT_EQ(0, findLastOccurrence("Hello World", 'H'));
}


//
//TEST(FindLastTests, noOccurrence) {
//    EXPECT_EQ(-1, findLast({1, 2, 42, 42, 63}, 99));
//}
//
//TEST(FindLastTests, doubleOccurrence) {
//    EXPECT_EQ(3, findLast({1, 2, 42, 42, 63}, 42));
//}
//
//TEST(FindLastTests, emptyVector) {
//    EXPECT_EQ(-1, findLast({}, 3));
//}
//
//TEST(FindLastTests, occurrenceOnBoundary) {
//    EXPECT_EQ(0, findLast({1, 2, 42, 42, 63}, 1));
//}
//
///*TEST(FindLastTests, wrongAssert) {
//    EXPECT_EQ(-1, findLast({1, 2, 42, 42, 63}, 1));
//    // This reaches the fault, infects the program state and propagates but the assert statement is wrong
//}*/
//
//
///*TEST(FindLastTests, emptyVectorPostConditions) {
//    int res1, res2;
//    EXPECT_EQ(-1, res1 = findLast({}, 3));
//    EXPECT_EQ(-1, res2 = findLast({}, 3));
//    //@ ensures res1 == res2;
//}*/
//
//
//
//TEST(FindFirstTests, noOccurrence) {
//    EXPECT_EQ(-1, findFirst({1, 2, 42, 42, 63}, 99));
//}
//
//TEST(FindFirstTests, doubleOccurrence) {
//    EXPECT_EQ(2, findFirst({1, 2, 42, 42, 63}, 42));
//}
//
//TEST(FindFirstTests, emptyVector) {
//    EXPECT_EQ(-1, findFirst({}, 3));
//}
//
//TEST(FindFirstTests, occurrenceOnBoundary) {
//    EXPECT_EQ(4, findFirst({1, 2, 42, 42, 63}, 63));
//}
//

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}