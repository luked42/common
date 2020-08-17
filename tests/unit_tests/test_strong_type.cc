#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <strong_type/strong_type.h>

using namespace ::testing;

namespace Common::Test {

class TestStrongType
	: public ::testing::Test
{
};

TEST_F(TestStrongType, Get_ValueIsSet_ReturnsValue)
{
	typedef StrongType<int, struct _Unit> Unit;

	const int value = 3;
	Unit strongType(value);

	ASSERT_EQ(value, strongType.Get());
}

TEST_F(TestStrongType, EqualityOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_TRUE(numberThree == numberThree);
	ASSERT_FALSE(numberThree == numberFour);
}

TEST_F(TestStrongType, InequalityOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_FALSE(numberThree != numberThree);
	ASSERT_TRUE(numberThree != numberFour);
}

TEST_F(TestStrongType, AdditionOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_EQ(Unit(7), numberThree + numberFour);
}

TEST_F(TestStrongType, SubstractionOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_EQ(Unit(-1), numberThree - numberFour);
}

TEST_F(TestStrongType, MultiplicationOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_EQ(Unit(12), numberThree * numberFour);
}

TEST_F(TestStrongType, DivisionOperator)
{
	typedef StrongType<double, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_EQ(Unit(0.75), numberThree / numberFour);
}

TEST_F(TestStrongType, ModuloOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	Unit numberFour(4);

	ASSERT_EQ(Unit(3), numberThree % numberFour);
}

TEST_F(TestStrongType, RawValue_AdditionOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	int numberFour(4);

	ASSERT_EQ(7, numberThree + numberFour);
}

TEST_F(TestStrongType, RawValue_SubstractionOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	int numberFour(4);

	ASSERT_EQ(-1, numberThree - numberFour);
}

TEST_F(TestStrongType, RawValue_MultiplicationOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	int numberFour(4);

	ASSERT_EQ(12, numberThree * numberFour);
}

TEST_F(TestStrongType, RawValue_DivisionOperator)
{
	typedef StrongType<double, struct _Unit> Unit;

	Unit numberThree(3);
	double numberFour(4);

	ASSERT_EQ(0.75, numberThree / numberFour);
}

TEST_F(TestStrongType, RawValue_ModuloOperator)
{
	typedef StrongType<int, struct _Unit> Unit;

	Unit numberThree(3);
	int numberFour(4);

	ASSERT_EQ(3, numberThree % numberFour);
}

}
