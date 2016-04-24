#ifndef UNITTEST_H
#define UNITTEST_H


#include "LinkedList.h"
class UnitTest
{
public:
    UnitTest();
    ~UnitTest();

    bool emptyTest1();
    bool emptyTest2();
    bool emptyTest3();
    bool emptyTest4();
    bool emptyTest5();

    bool sizeTest1();
    bool sizeTest2();
    bool sizeTest3();

    bool searchTest1();
    bool searchTest2();
    bool searchTest3();
    
    bool vectorTest1();
    bool vectorTest2();
    
    bool addBackTest1();
    bool addBackTest2();
    bool addBackTest3();
    bool addBackTest4();
    bool addBackTest5();
    
    bool addFrontTest1();
    bool addFrontTest2();
    bool addFrontTest3();
    bool addFrontTest4();
    bool addFrontTest5();
    
    bool removeBackTest1();
    bool removeBackTest2();
    bool removeBackTest3();
    bool removeBackTest4();
    
    bool removeFrontTest1();
    bool removeFrontTest2();
    bool removeFrontTest3();
    bool removeFrontTest4();

private:
    
};

#endif