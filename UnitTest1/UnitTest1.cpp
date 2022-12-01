#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include <iostream>
#include "../Lab_08.1String/Lab_08.1String.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str{ "hi...kl" };
			int t = Count(str);
			Assert::AreEqual(t, 5);
		}
	};
}
