cmake_minimum_required(VERSION 3.16)
project(ShivLib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(INCLUDES
        include/ShivLib/dataStructures/array.hpp
        include/ShivLib/dataStructures/matrix.hpp
        include/ShivLib/dataStructures/map.hpp
        include/ShivLib/dataStructures/string.hpp
        include/ShivLib/dataStructures/string_view.hpp
        include/ShivLib/dataStructures/vector.hpp
        include/ShivLib/dataStructures/list.hpp
        include/ShivLib/multithreading/mutex.hpp
        include/ShivLib/multithreading/thread.hpp
        include/ShivLib/algorithm.hpp
        include/ShivLib/exception.hpp
        include/ShivLib/utility.hpp
        include/ShivLib/typeTraits.hpp
        include/ShivLib/memory.hpp
        include/ShivLib/cstddef.hpp
        include/ShivLib/iterators.hpp)

set(EXPERIMENTAL
	include/ShivLib/experimental/poly_duck.hpp
	include/ShivLib/experimental/lazy_evaluation.hpp
	include/ShivLib/experimental/format.hpp
	include/ShivLib/experimental/ranges.hpp)

add_compile_options(-Wall -Wextra -Wpedantic -Werror)

add_library(ShivLib INTERFACE)
target_include_directories(ShivLib INTERFACE ${INCLUDES} ${EXPERIMENTAL})
