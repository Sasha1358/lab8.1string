#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		Assert::AreEqual(Count("kjgjfkjgfg"), 0);
		}
	};
}
