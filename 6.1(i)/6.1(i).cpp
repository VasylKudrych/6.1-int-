#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1(int)/6.1(int).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61i
{
	TEST_CLASS(My61i)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int k = 0;
			int sum = 0;
			const int n = 24;
			int p[24] = { 4,  3, - 9,  8, 10,  3, - 8, - 10,  1, 12,  5, 13,  6, - 6,  5,  1, - 8 - 3, 10, - 1,  2, 13, - 1, - 4 };

			format_mas(p, sum, k, n);

			Assert::AreEqual(20, k);
			Assert::AreEqual(68, sum);
		}
	};
}
