#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "DataStructs/nodo.h"
#include "Translator/WeightedWord.h"
#include <fstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "DataStructs/c_list.h"

using namespace std;

template <typename T>
class AVL_tree
{
    enum RotationWay {
        LEFT = 0,
        RIGHT = 1
    };

    typedef AVL_Node<T> Node_T;

private:

    Node_T *m_pRoot;

private:

    bool insert(T &d, Node_T *&p, bool &Balanced);

    void printElem(Node_T *&p);

    void singleRotationTo(Node_T *&p, RotationWay way);

    void doubleRotationTo(Node_T *&p, RotationWay way);

    void func_over(Node_T *p, size_t func(string&, string&), string &first, AVL_tree<WeightedWord> &_tree);

    void makeRelations(Node_T *origin, ofstream& file);

    void take_n_by_side(Node_T *_p, RotationWay way, size_t &n, C_List<T> &_list);

public:

    AVL_tree() :
        m_pRoot(0)
    {}

    ~AVL_tree();

    bool find(T &d, Node_T **&p);

    T &find2(T &d);

    bool insert(T &d);

    bool remove(T &d);

    void graph();

    void funcOver(size_t func(string&, string&), string &first, AVL_tree<WeightedWord> &_tree);

    void printIn();

    void printPre();

    void printPos();

    void printIn(Node_T *p);

    void printPre(Node_T *p);

    void printPos(Node_T *p);

    int height();

    void take_minor(size_t n, C_List<T> &_list);

    void take_greater(size_t n, C_List<T> &_list);
};

#include "avl_tree.cpp"

#endif // AVL_TREE_H
