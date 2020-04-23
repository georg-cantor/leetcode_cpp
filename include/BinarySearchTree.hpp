//
// Created by 秦栋梁 on 2020/4/22.
//

#ifndef LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP
#define LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP

template <typename Comparable>
class BinarySearchTree {
public:
    BinarySearchTree();
    /***
     * Copy Constructor
     * @param rhs
     */
    BinarySearchTree(const BinarySearchTree& rhs) : root{nullptr} {
        root = clone(rhs.root);
    }

    /***
     *
     * @param rhs
     */
    BinarySearchTree(BinarySearchTree && rhs);
    /***
     * Destructor for the tree
     */
    ~BinarySearchTree() {
        makeEmpty();
    }

    const Comparable & findMin() const;
    const Comparable & findMax() const;
    bool contains( const Comparable & x) const {
        return contains(x, root);
    }
    bool isEmpty() const;
    void printTree(ostream & out = cout) const;

    void makeEmpty() {
        makeEmpty(root);
    }
    void insert(const Comparable & x) {
        insert(x, root);
    }
    void insert(Comparable && x);
    void remove(const Comparable & x) {
        remove(x, root);
    }

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

    /***
     * Internal method to insert into a subtree.
     * @param x: is the item to insert.
     * @param t: is the node that roots the subtree.
     * Set the new root of the subtree.
     */
    void insert(const Comparable & x, BinaryNode * & t) {
        if (t == nullptr) {
            t = new BinaryNode{x, nullptr, nullptr};
        } else if (x < t->element) {
            insert(x, t->left);
        } else if (x > t->element) {
            insert(x, t->right);
        } else ; // Duplicates, do nothing
    }

    /***
     * Internal method to insert into a subtree.
     * @param x: is the item to insert by moving.
     * @param t: is the node that roots the subtree.
     * Set the new root of the subtree.
     */
    void insert(Comparable && x, BinaryNode * & t) {
        if (t == nullptr) {
            t = new BinaryNode{std::move(x), nullptr, nullptr};
        } else if (x < t->element) {
            insert(std::move(x), t->left);
        } else if (x > t->element) {
            insert(std::move(x), t->right);
        } else ; //Duplicates, do nothing
    }
    void remove(const Comparable &x, BinaryNode * & t) {
        if (t == nullptr) return; // Item not found, do nothing
        if (x < t->element) {
            remove(x, t->left);
        } else if (x > t->element) {
            remove(x, t->right);
        } else if (t->left != nullptr && t->right != nullptr) {
            //Two children
            t->element = findMin(t->right)->element;
            remove(t->element, t->right);
        } else {
            //One child
            BinaryNode *oldNode = t;
            t = (t->left != nullptr) ? t->left : t->right;
            delete oldNode;
        }

    }
    BinaryNode* findMin(BinaryNode* t) const {
        if (t == nullptr) return nullptr;
        if (t->left == nullptr) return t;
        return findMin(t->left);
    }
    BinaryNode* findMax(BinaryNode* t) const {
        if (t != nullptr) {
            while (t->right != nullptr) {
                t = t->right;
            }
        }
        return t;
    }
    bool contains(const Comparable& x, BinaryNode* t) const{
        if (t == nullptr) return false;
        else if (x < t->element) return contains(x, t->left);
        else if (x > t->element) return contains(x, t->right);
        else return true; // Match with t->element;
    }

    /***
     * Internal method to make subtree empty.
    */
    void makeEmpty(BinaryNode*& t) {
        if (t != nullptr) {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delet t;
        }
        t = nullptr;
    }
    void printTree(BinaryNode *t, ostream& out) const;

    /***
     * Internal method to clone subtree
     * @param t
     * @return
     */
    BinaryNode* clone(BonaryNode* t) const {
        if (t ==nullptr) {
            return nullptr;
        } else {
            return new BinaryNode{t->element, clone(t->left), clone(t->right)};
        }
    }
};

#endif //LEETCODE_CPP_INCLUDE_BINARYSEARCHTREE_HPP
