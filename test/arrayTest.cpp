#include "../include/ShivLib/array.hpp"
#include <boost/test/unit_test.hpp>

// Using auto test suite for now since it builds alot faster as we get more tests,
// suite will be create manually for better output
BOOST_AUTO_TEST_SUITE(array_test) // NOLINT(cert-err58-cpp)
    BOOST_AUTO_TEST_CASE(array_iterator_test) // NOLINT(cert-err58-cpp)
    {

    }

    BOOST_AUTO_TEST_CASE(fillswap_test) // NOLINT(cert-err58-cpp)
    {
        ShivLib::array<int, 5> array1{0, 1, 2, 3, 4};
        ShivLib::array<int, 5> array2{4, 3, 2, 1, 0};
        ShivLib::array<int, 5> expectedArray1{4, 4, 4, 4, 4};
        array1.swap(array2);

        BOOST_TEST(array1 == array2);
        array2.fill(4);
        BOOST_TEST(array2 == expectedArray1);
    }

    BOOST_AUTO_TEST_CASE(capacity_test, * boost::unit_test::disabled()) // NOLINT(cert-err58-cpp)
    {
        ShivLib::array<int, 5> array1{0, 1, 2, 3, 4};
        BOOST_TEST(array1.size() == 5);
        //ShivLib::array<int, 0> array1{};
        //BOOST_TEST(array1.empty() == true);
    }
BOOST_AUTO_TEST_SUITE_END() // NOLINT(cert-err58-cpp)