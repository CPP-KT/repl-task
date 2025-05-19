#include "example.h"

#include <gtest/gtest.h>

namespace ct::test {

TEST(ExampleTest, two_plus_two_is_four) {
  ASSERT_EQ(sum(2, 2), 4);
}

} // namespace ct::test
