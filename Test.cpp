#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "LinkedListOfInts.h"
#include <iostream>

TEST_CASE( "isEmpty()" )
{
	LinkedListOfInts list;

	SECTION( "returns true when list is empty" )
	{
		if(list.isEmpty() == true)
			std::cout<<"isEmpty() returns true when list is empty: PASSED\n";
		REQUIRE(list.isEmpty() == true);
	}
	SECTION( "returns false when list has an item added to it using addFront" )
	{
		list.addFront(5);
		if(list.isEmpty() == false)
			std::cout<<"isEmpty() returns false when list has an item added to it using addFront: PASSED\n";
		REQUIRE(list.isEmpty() == false);
	}
	SECTION( "returns false when list has an item added to it using addBack" )
	{
		list.addBack(5);
		if(list.isEmpty() == false)
			std::cout<<"isEmpty() returns false when list has an item added to it using addBack: PASSED\n";
		REQUIRE(list.isEmpty() == false);
	}
	SECTION( "returns true when list has an item added to it and then removed using addFront and removeFront" )
	{
		list.addFront(5);
		list.removeFront();
		if(list.isEmpty() == true)
			std::cout<<"isEmpty() returns true when list has an item added to it and then removed using addFront and removeFront: PASSED\n";
		REQUIRE(list.isEmpty() == true);
	}
	SECTION( "returns true when list has an item added to it and then removed from it using addBack and removeBack" )
	{
		list.addBack(5);
		list.removeBack();
		if(list.isEmpty() == true)
			std::cout<<"isEmpty() returns true when list has an item added to it and then removed from it using addBack and removeBack: PASSED\n";
		REQUIRE(list.isEmpty() == true);
	}
}

TEST_CASE( "size()" )
{
	LinkedListOfInts list;

	SECTION( "returns 0 when list is empty" )
	{
		if(list.size() == 0)
			std::cout<<"size() returns 0 when list is empty: PASSED\n";
		REQUIRE(list.size() == 0);
	}
	SECTION( "returns 1 when list has one element added to it using addFront" )
	{
		list.addFront(5);
		if(list.size() == 1)
			std::cout<<"size() returns 1 when list has one element added to it using addFront: PASSED\n";
		REQUIRE(list.size() == 1);
	}
	SECTION( "returns the correct size when list has multiple elements added to it using addFront" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(5);
		if(list.size() == 10)
			std::cout<<"size() returns the correct size when list has multiple elements added to it using addFront: PASSED\n";
		REQUIRE(list.size() == 10);
	}
	SECTION( "returns 1 when list has one element added to it using addBack" )
	{
		list.addBack(5);
		if(list.size() == 1)
			std::cout<<"size() returns 1 when list has one element added to it using addBack: PASSED\n";
		REQUIRE(list.size() == 1);
	}
	SECTION( "returns the correct size when list has multiple elements added to it using addBack" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(5);
		if(list.size() == 10)
			std::cout<<"size() returns the correct size when list has multiple elements added to it using addBack: PASSED\n";
		REQUIRE(list.size() == 10);
	}
	SECTION( "returns the correct size when list has multiple elements added to it using addBack" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(5);
		if(list.size() == 10)
			std::cout<<"size() returns the correct size when list has multiple elements added to it using addBack: PASSED\n";
		REQUIRE(list.size() == 10);
	}
	SECTION( "returns the correct size when list has multiple elements added to it using addFront and then taken out using removeFront" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(5);
		for(int i = 0; i < 5; i++)
			list.removeFront();
		if(list.size() == 5)
			std::cout<<"size() returns the correct size when list has multiple elements added to it using addFront and then taken out using removeFront: PASSED\n";
		REQUIRE(list.size() == 5);
	}
	SECTION( "returns the correct size when list has multiple elements added to it using addBack and then taken out using removeBack" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(5);
		for(int i = 0; i < 5; i++)
			list.removeBack();
		if(list.size() == 5)
			std::cout<<"size() returns the correct size when list has multiple elements added to it using addBack and then taken out using removeBack: PASSED\n";
		REQUIRE(list.size() == 5);
	}

}

TEST_CASE( "search()" )
{
	LinkedListOfInts list;

	SECTION( "returns false when the list is empty" )
	{
		if(list.search(5) == false)
			std::cout<<"search() returns false when the list is empty: PASSED\n";
		REQUIRE(list.search(5) == false);
	}
	SECTION( "returns false when the list has multiple values that are not the one being looked for (added using addFront)" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		if(list.search(10) == false)
			std::cout<<"search() returns false when the list has multiple values that are not the one being looked for (added using addFront): PASSED\n";
		REQUIRE(list.search(10) == false);
	}
	SECTION( "returns true when the list has multiple values and one is being looked for (added using addFront)" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		if(list.search(5) == true)
			std::cout<<"search() returns true when the list has multiple values and one is being looked for (added using addFront): PASSED\n";
		REQUIRE(list.search(5) == true);
	}
	SECTION( "returns false when the list has multiple values that are not the one being looked for (added using addBack)" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(i);
		if(list.search(10) == false)
			std::cout<<"search() returns false when the list has multiple values that are not the one being looked for (added using addBack): PASSED\n";
		REQUIRE(list.search(10) == false);
	}
	SECTION( "returns true when the list has multiple values and one is being looked for (added using addBack)" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(i);
		if(list.search(5) == true)
			std::cout<<"search() returns true when the list has multiple values and one is being looked for (added using addBack): PASSED\n";
		REQUIRE(list.search(5) == true);
	}
}

TEST_CASE( "addBack()" )
{
	LinkedListOfInts list;

	SECTION( "adds the correct number to the list" )
	{
		list.addBack(5);
		std::vector<int> vec = list.toVector();
		if(vec.back() == 5)
			std::cout<<"addBack() adds the correct number to the list: PASSED\n";
		REQUIRE(vec.back() == 5);
	}
	SECTION( "correctly adds numbers to the end of the list" )
	{
		for(int i = 0; i < 10; i++)
			list.addBack(i);
		std::vector<int> vec = list.toVector();
		if(vec.back() == 9)
			std::cout<<"addBack() correctly adds numbers to the end of the list: PASSED\n";
		REQUIRE(vec.back() == 9);
	}
}

TEST_CASE( "addFront()" )
{
	LinkedListOfInts list;

	SECTION( "adds the correct number to the list" )
	{
		list.addFront(5);
		std::vector<int> vec = list.toVector();
		if(vec.front() == 5)
			std::cout<<"addFront() adds the correct number to the list: PASSED\n";
		REQUIRE(vec.front() == 5);
	}
	SECTION( "correctly adds numbers to the front of the list" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		std::vector<int> vec = list.toVector();
		if(vec.front() == 9)
			std::cout<<"addFront() correctly adds numbers to the front of the list: PASSED\n";
		REQUIRE(vec.front() == 9);
	}
}

TEST_CASE( "removeBack()" )
{
	LinkedListOfInts list;

	SECTION( "returns false when the list is empty" )
	{
		bool empty = list.removeBack();
		if(empty == false)
			std::cout<<"removeBack() returns false when the list is empty: PASSED\n";
		REQUIRE(empty == false);
	}
	SECTION( "returns true when removeBack() is called on a not empty list (meaning something was removed properly)" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		bool removed = list.removeBack();
		if(removed == true)
			std::cout<<"removeBack() returns true when removeBack() is called on a not empty list (meaning something was removed properly): PASSED\n";
		REQUIRE(removed == true);
	}
	SECTION( "properly removes the last item in the list" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		std::vector<int> vec = list.toVector();
		if(vec.back() == 1)
			std::cout<<"removeBack() properly removes the last item in the list: PASSED\n";
		REQUIRE(vec.back() == 1);
	}
}

TEST_CASE( "removeFront()" )
{
	LinkedListOfInts list;

	SECTION( "returns false when the list is empty" )
	{
		bool empty = list.removeFront();
		if(empty == false)
			std::cout<<"removeFront() returns false when the list is empty: PASSED\n";
		REQUIRE(empty == false);
	}
	SECTION( "returns true when removeFront() is called on a not empty list (meaning something was removed properly)" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		bool removed = list.removeFront();
		if(removed == true)
			std::cout<<"removeFront() returns true when removeFront() is called on a not empty list (meaning something was removed properly): PASSED\n";
		REQUIRE(removed == true);
	}
	SECTION( "properly removes the first item in the list" )
	{
		for(int i = 0; i < 10; i++)
			list.addFront(i);
		std::vector<int> vec = list.toVector();
		if(vec.front() == 8)
			std::cout<<"removeFront() properly removes the first item in the list: PASSED\n";
		REQUIRE(vec.front() == 8);
	}
}
