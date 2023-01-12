/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#include "PNGDatastreamTests.hpp"

using namespace Ishiko;

PNGDatastreamTests::PNGDatastreamTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PNGDatastream tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PNGDatastreamTests::ConstructorTest1(Test& test)
{
}
