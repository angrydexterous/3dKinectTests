
#include <stdint.h>
#include <gmock/gmock.h>


#include <fiblib/Fibonacci.h>

class fibonacci_test: public testing::Test
{
public:
};

TEST_F(fibonacci_test, CheckSomeResults)
{
    fiblib::Fibonacci fib;

    EXPECT_EQ((uint64_t) 0, fib(0));
    EXPECT_EQ((uint64_t) 1, fib(1));
    EXPECT_EQ((uint64_t) 1, fib(2));
    EXPECT_EQ((uint64_t)21, fib(8));
    // ...
}
