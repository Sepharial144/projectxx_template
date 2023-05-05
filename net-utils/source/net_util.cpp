#include <gtest/gtest.h>

TEST(NetApiTest, TranslatePort) {
	EXPECT_EQ(3000, 3000);
}

TEST(NetApiTest, TranslateAddress) {
    ASSERT_ANY_THROW({throw std::exception("Test exception")});
}