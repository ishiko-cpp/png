/*
    Copyright (c) 2023 Xavier Leclercq
    All rights reserved.
*/

#ifndef GUARD_ISHIKO_CPP_PNG_TESTS_PNGSIGNATURETESTS_HPP
#define GUARD_ISHIKO_CPP_PNG_TESTS_PNGSIGNATURETESTS_HPP

#include <Ishiko/TestFramework.hpp>

class PNGSignatureTests : public Ishiko::TestSequence
{
public:
    PNGSignatureTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
