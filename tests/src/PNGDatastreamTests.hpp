/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#ifndef GUARD_ISHIKO_CPP_PNG_TESTS_PNGDATASTREAMTESTS_HPP
#define GUARD_ISHIKO_CPP_PNG_TESTS_PNGDATASTREAMTESTS_HPP

#include <Ishiko/TestFramework.hpp>

class PNGDatastreamTests : public Ishiko::TestSequence
{
public:
    PNGDatastreamTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
