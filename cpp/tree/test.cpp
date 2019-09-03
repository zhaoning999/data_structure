#include "tree.h"

#include <memory>

#include <iostream>

using namespace tree;
int main(){
    BaseTree t0 = BaseTree();

    BaseTree t6 = BaseTree(6);

    BaseTree* t4 = new BaseTree(4, &t6, nullptr); // new 返回指针
    BaseTree* t2 = new BaseTree(2, nullptr, t4);

    BaseTree t5 = BaseTree{5};
    BaseTree t3 = BaseTree{3, nullptr, &t5}; //初始化列表

    BaseTree* t1 = new BaseTree{1, t2, &t3};

    preOrder(t1);

    delete t4;
    delete t2;

    std::cout << "complete delete;" << std::endl;
}