/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#ifndef GUARD_ISHIKO_CPP_PNG_TESTS_PNGCHUNKTESTS_HPP
#define GUARD_ISHIKO_CPP_PNG_TESTS_PNGCHUNKTESTS_HPP

#include <Ishiko/TestFramework.hpp>

class PNGChunkTests : public Ishiko::TestSequence
{
public:
    PNGChunkTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
