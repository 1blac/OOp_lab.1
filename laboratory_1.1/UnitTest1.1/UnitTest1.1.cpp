#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory_1.1/LINE.h"
#include "D:\Нова папка\laboratory_1.1\laboratory_1.1\LINE.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			LINE y;
			y.Init(7, 7, 7);
			int test = y.function();
			Assert::AreEqual(56, test);
		}
	};
}