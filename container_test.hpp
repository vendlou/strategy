#ifndef __CONTAINER_TEST_HPP__
#define __CONTAINER_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "VectorContainer.hpp"
#include "container.hpp"
#include "listcontainer.hpp"

TEST(VectorContainerTestSet, SwapTest) {	
    Op* seven = new Op(7);
    Op* two = new Op(2);
    VectorContainer* test_container = new VectorContainer();
    test_container->add_element(seven);
    test_container->add_element(two);
    
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
    test_container->swap(0,1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 2);
    EXPECT_EQ(test_container->at(1)->evaluate(),7);
     
}


TEST(VectorContainerTestSet, AtTest) {	
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SizeTest) {	
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->size(), 1);
}


TEST(VectorContainerTestSet, AddElementTest) {	
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTest,SwapTest){
    Op* seven = new Op(7);
    Op* two = new Op(2);
    ListContainer* test_container = new ListContainer();
    test_container->add_element(seven);
    test_container->add_element(two);
    
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
    test_container->swap(0,1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 2);

}
TEST(ListContainerTest, AtTest) {
    Op* seven = new Op(7);
    ListContainer* test_container = new ListContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTest, SizeTest) {
    Op* seven = new Op(7);
    ListContainer* test_container = new ListContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->size(), 1);
}


TEST(ListContainerTest, AddElementTest) {
    Op* seven = new Op(7);
    ListContainer* test_container = new ListContainer();
    test_container->add_element(seven);
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}


#endif
