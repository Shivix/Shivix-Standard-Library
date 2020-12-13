#include "../include/ShivLib/algorithm.hpp"
#include "../include/ShivLib/dataStructures/array.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(algorithm_test) //NOLINT
BOOST_AUTO_TEST_CASE(comparitor_test){ //NOLINT
    auto test = ShivLib::min(3, 8);
    BOOST_TEST(ShivLib::max(5, 8) == 8);
    BOOST_TEST(test == 3);
    ShivLib::array<int, 3> testArray{0, 1, 2};
    ShivLib::array<int, 3> testArray2{1, 2, 3};
    BOOST_TEST(ShivLib::equal(testArray.begin(), testArray.end(), testArray2.begin()) == false);
    ShivLib::array<int, 3> testArray3{0, 1, 2};
    ShivLib::array<int, 3> testArray4{0, 1, 2};
    BOOST_TEST(ShivLib::equal(testArray3.begin(), testArray3.end(), testArray4.begin()) == true);
}
BOOST_AUTO_TEST_SUITE_END() //NOLINT