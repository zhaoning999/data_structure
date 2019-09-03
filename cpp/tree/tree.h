#ifndef _TREE_H_
#define _TREE_H_
#include <iostream>
namespace tree{

class BaseTree
{

public:
    BaseTree(){};
    BaseTree(int data):_data(data){};
    BaseTree(int data, BaseTree* t1, BaseTree* t2):
        _data(data), lchild(t1), rchild(t2){};

    ~BaseTree(){
        std::cout << "the tree " << _data << "is deleted" <<std::endl;
    };

    BaseTree* getLchild(){
        return lchild;
    }
    BaseTree* getRchild();


    void visit(){
        std::cout << "the tree's data is " << _data << std::endl;
    };

private:
    /* data */
    int _data = 0;
    BaseTree* rchild{nullptr}, *lchild{nullptr};
};

inline BaseTree* BaseTree::getRchild(){
        return rchild;
    }


void preOrder(tree::BaseTree* t);

}


#endif