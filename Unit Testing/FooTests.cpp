/*
 * FooTests.cpp
 *
 *  Created on: Aug 18, 2022
 *      Author: aseel
 */
#include "gtest/gtest.h"
#include "foo.h"
namespace{
class FooTest : public ::testing:: Test{
protected:
	Foo foo;

};
  TEST_F(FooTest ,Foo){
	ASSERT_TRUE(foo.foo());

}
  TEST_F(FooTest ,Foo2){
  	ASSERT_FALSE(foo.RFalse());
  }
}



