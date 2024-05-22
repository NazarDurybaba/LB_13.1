
#include "CppUnitTest.h"
#include "../TaylorSeries.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace TaylorSeries;

namespace UnitTest
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCalculateTerm)
        {
            // Тестуємо calculateTerm для x = 2, n = 3
            double result = calculateTerm(2, 3);
            Assert::AreEqual(-4.0 / 3.0, result, 0.0001);

            // Тестуємо calculateTerm для x = -1, n = 5
            result = calculateTerm(-1, 5);
            Assert::AreEqual(120.0 / 6.0, result, 0.0001);

            // Тестуємо calculateTerm для x = 0.5, n = 2
            result = calculateTerm(0.5, 2);
            Assert::AreEqual(-0.125, result, 0.0001);

            
        }
    };
}
