#pragma once

#include <iostream>
namespace Common {

template <typename T, typename TYPE>
class StrongType
{
public:
	explicit StrongType(const T& value)
		: mValue(value)
	{
	}

	virtual ~StrongType() = default;

	StrongType(const StrongType&) = default;
	StrongType(StrongType&&) = default;
	StrongType& operator=(const StrongType&) = default;

	const T& Get() const { return mValue; }

	bool operator==(const StrongType& other) const { return mValue == other.mValue; }
	bool operator!=(const StrongType& other) const { return !(*this == other); }
	bool operator<(const StrongType& other) const { return mValue < other.mValue; }
	bool operator>(const StrongType& other) const { return mValue > other.mValue; }
	bool operator<=(const StrongType& other) const { return mValue <= other.mValue; }
	bool operator>=(const StrongType& other) const { return mValue >= other.mValue; }

	StrongType operator+(const StrongType& other) const { return StrongType(mValue + other.mValue); }
	StrongType operator-(const StrongType& other) const { return StrongType(mValue - other.mValue); }
	StrongType operator*(const StrongType& other) const { return StrongType(mValue * other.mValue); }
	StrongType operator/(const StrongType& other) const { return StrongType(mValue / other.mValue); }
	StrongType operator%(const StrongType& other) const { return StrongType(mValue % other.mValue); }

	// Raw value operators
	T operator+(const T& other) const { return mValue + other; }
	T operator-(const T& other) const { return mValue - other; }
	T operator*(const T& other) const { return mValue * other; }
	T operator/(const T& other) const { return mValue / other; }
	T operator%(const T& other) const { return mValue % other; }

private:
	T mValue;
};

template <typename S, typename TYPE>
std::ostream& operator<< (std::ostream& os, const StrongType<S, TYPE>& value)
{
    os << value.Get();
    return os;
}

}
