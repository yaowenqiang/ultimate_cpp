//
// Created by yaowenqiang on 2023/2/14.
//

#ifndef ULTIMATE_CPP_PAIR_H
#define ULTIMATE_CPP_PAIR_H


// template class's method must be in the header file
template<typename K, typename V>
class Pair {
private:
    K key;
    V value;
public:
    Pair() = default;
    K getKey() const;

    V getValue() const;

public:
//    Pair(K key, V value) : key(key), value(value) {
//
//    }
    Pair(K key, V value);

};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value):key(key), value(value) {}

template<typename K, typename V>
K Pair<K, V>::getKey() const {
    return key;
}

template<typename K, typename V>
V Pair<K, V>::getValue() const {
    return value;
}


#endif //ULTIMATE_CPP_PAIR_H
