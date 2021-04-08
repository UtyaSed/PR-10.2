#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 10.1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = "grgrwhilegrgr";

			Assert::AreEqual(Search_while(str), true);
		}
	};
}