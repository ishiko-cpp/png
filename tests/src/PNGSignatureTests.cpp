/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#include "PNGSignatureTests.hpp"

using namespace Ishiko;

PNGSignatureTests::PNGSignatureTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PNGSignature tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PNGSignatureTests::ConstructorTest1(Test& test)
{
}
