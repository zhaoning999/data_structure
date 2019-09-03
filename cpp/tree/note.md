#### 学习感悟

1. 编译时相关的cpp都要编译

    `g++ -o test test.cpp tree.cpp -std=c++11`

2. 类的方法可在类中实现，也在类所在头文件中用`inline`实现，也可在对应的cpp中实现，但编译时需要包含该cpp。

```shell
//未定义该函数的具体实现，包含该函数实现的cpp未被编译
root@LAPTOP-U9BK8QN3:~/cpp_learn# g++ -o test test.cpp -std=c++11
/tmp/ccH1baRH.o: In function `main':
test.cpp:(.text+0x103): undefined reference to `tree::preOrder(tree::BaseTree*)'
collect2: error: ld returned 1 exit status
```

3. 学习使用make编译。