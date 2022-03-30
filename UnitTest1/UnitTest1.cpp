#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.5/Lab_8.1.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = ",----sdfsdfsd - ,-,-,-,sdfsdfs";
			Assert::AreEqual(Count(str), 4);
		}
	};
}
