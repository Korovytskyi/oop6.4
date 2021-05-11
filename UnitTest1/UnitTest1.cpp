#include "pch.h"
#include "CppUnitTest.h"

#include "../6.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1,2,3,4,5,6,7,8,9 };
			bool check = dublicat(arr, size(arr));
			Assert::AreEqual(false, check);
		}
	};
}