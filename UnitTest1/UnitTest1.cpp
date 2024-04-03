#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_2.5/Liquid.h"
#include "../oop_2.5/Liquid.cpp"
#include "../oop_2.5/Alcohol.h"
#include "../oop_2.5/Alcohol.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Liquid liquid1("Water", 0.998); 
			Liquid liquid2(0.998);

			Assert::AreEqual("Water", liquid1.getName().c_str());
			Assert::AreEqual(0.998, liquid1.getDensity());
			Assert::AreEqual("", liquid2.getName().c_str()); 
			Assert::AreEqual(0.998, liquid2.getDensity());
		}
	};
}
