#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1(2)/6.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61it
{
	TEST_CLASS(My61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			int array[] = {1, 2, 3, 4, 5};
			g = Sum1(array, 7);
			Assert::AreEqual(g, 0.);
		}
	};
}
