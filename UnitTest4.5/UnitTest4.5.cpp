#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.5/Time.cpp"
#include "../Lab_4.5/Triad.cpp"
#include "../Lab_4.5/Time.h"
#include "../Lab_4.5/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A1(8, 4, 9, 0), B1(8, 4, 9, 0);
			Assert::AreEqual(A1 == B1, true);

		}
	};
}
