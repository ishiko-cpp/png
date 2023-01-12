/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#include "PNGChunkTests.hpp"

using namespace Ishiko;

PNGChunkTests::PNGChunkTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PNGChunk tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void PNGChunkTests::ConstructorTest1(Test& test)
{
}
