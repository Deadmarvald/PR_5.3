#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT53
{
	TEST_CLASS(UT53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(0.);
			Assert::AreEqual(t, 1.);
		}
	};
}
