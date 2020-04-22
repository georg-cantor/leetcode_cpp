//
// Created by 秦栋梁 on 2020/4/22.
//

#ifndef LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP
#define LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP

template <typename Comparable>
class BinarySearchTree {
public:
    BinarySearchTree();
    BinarySearchTree(const BinarySearchTree& rhs);
    BinarySearchTree(BinarySearchTree && rhs);
    ~BinarySearchTree();

    const Comparable & findMin() const;
    const Comparable & findMax() const;
    bool contains( const Comparable & x) const;
    bool isEmpty() const;
    void printTree(ostream & out = cout) const;

    void makeEmpty();
    void insert(const Comparable & x);
    void insert(Comparable && x);
    void remove(const Comparable & x);

    BinarySearchTree & operator=(const BinarySearchTree & rhs);
    BinarySearchTree & operator=(BinarySearchTree && rhs);

private:
    Struct BinaryNode {
        Comparable element;
        BinaryNode* left;
        BinaryNode* right;

        BinaryNode( const Comparable & theElement, BinaryNode *lt, BinaryNode *rt ): element{theElement}, left{lt},
        right{rt} {}

        BinaryNode( Comparable && theElement, BinaryNode *lt, BinaryNode *rt): element{std::move(theElement)}, left{lt},
        right{rt} {}
    }

    BinaryNode *root;


};

#endif //LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP
