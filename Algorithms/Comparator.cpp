#include "Comparator.h"

template<typename T> bool Comparator<T>::operator()(T x1, T x2) {
    return x1 < x2;
}