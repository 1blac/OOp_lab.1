#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory_1.2/Angle.h"
#include "D:\Нова папка\laboratory_1.2\Angle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Angle A;
			bool B = A.Init(31, 3);
			Assert::AreEqual(B, true);

		}
	};
}
