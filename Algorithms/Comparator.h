#ifndef COMPARATOR_H
#define COMPARATOR_H

template <class T>
class Comparator {
public:
    bool operator()(T x1, T x2);
};

template class Comparator<int>;

#endif //COMPARATOR_H
