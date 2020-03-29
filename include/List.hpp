//
// Created by 秦栋梁 on 2020/3/28.
//

#ifndef LEETCODE_CPP_INCLUDE_LIST_HPP
#define LEETCODE_CPP_INCLUDE_LIST_HPP

template <typename Object>
class List {
private:
    struct Node {

    };

public:
    class const_iterator {

    };

    class iterator : public const_iterator {

    };

public:
    List() {}
    List( const List& rhs ) {}
    ~List() {}
    List& operator= (const List& rhs) {}
    List( List&& rhs) {}
};

#endif //LEETCODE_CPP_INCLUDE_LIST_HPP
