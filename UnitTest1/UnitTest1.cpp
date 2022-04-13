﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_2.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line l1;
			l1.setFirst(13);
			l1.setSecond(5);
			Assert::AreEqual(25, (l1.getFirst() * 2 + l1.getSecond()));
		}
	};
}
