#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.1/Lab7.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = {0, 1, 2, 5, 7};
			Assert::AreEqual(IndexOfMinOddElement(arr, 5), 1);

			array<int, 100> arr2 = { 0, 0, 0, 6, 7 };
			Assert::AreEqual(IndexOfMinOddElement(arr2, 5), 4);
			
			array<int, 100> arr3 = { 0, 0, 0, 0, 0 };
			Assert::AreEqual(IndexOfMinOddElement(arr3, 5), -1);

			array<int, 100> arr4 = { 0, 12, 20, 50, 70 };
			Assert::AreEqual(IndexOfMinOddElement(arr4, 5), -1);

			array<int, 100> arr5 = { 3, 7, 9, 13, 15 };
			Assert::AreEqual(IndexOfMinOddElement(arr5, 5), 0);
		}
	};
}
