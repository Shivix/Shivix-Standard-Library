#include "../include/ShivLib/vector.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(vector_test) // NOLINT(cert-err58-cpp)
    BOOST_AUTO_TEST_CASE(range_based_test){ // NOLINT(cert-err58-cpp)

        vector<int> vector1{2};

        for(auto&& i: vector1){
            
        }
    }
BOOST_AUTO_TEST_SUITE_END() // NOLINT(cert-err58-cpp)