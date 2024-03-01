cmake_minimum_required(VERSION 3.26)
project(STL_Vortex)

set(CMAKE_CXX_STANDARD 17)

add_executable(STL_Vortex main.cpp
        Templates/Templates.cpp
        Templates/Array.cpp
        Templates/Array.h
        Iterators/Iterators.cpp
        Iterators/Iterators.cpp
        Algorithms/Comparator.cpp
        Algorithms/Comparator.h
        Algorithms/Sort.cpp
        "Containers/Sequence Containers/Array.cpp"
        "Containers/Sequence Containers/Deque.cpp"
        "Containers/Sequence Containers/ForwardList.cpp"
        "Containers/Sequence Containers/List.cpp"
        "Containers/Sequence Containers/Vector.cpp"
        "Containers/Associative Containers/Set.cpp"
        "Containers/Associative Containers/Map.cpp"
        "Containers/Associative Containers/Multiset.cpp"
        "Containers/Associative Containers/Multimap.cpp"
        "Containers/Adapters Containers/Stack.cpp"
        "Containers/Adapters Containers/Queue.cpp"
        "Containers/Adapters Containers/PriorityQueue.cpp")
