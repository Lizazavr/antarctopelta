#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(rp, norm)
{
    text txt = create_text();
    append_line(txt, "0 lool\n");
    append_line(txt, "1 lool\n");
    append_line(txt, "2 lool\n");

    std::string output_text = "";

    output_text += "|1 lool\n";
    output_text += "2 lool\n";

    testing::internal::CaptureStdout();

    m(txt, 1, 0);
    rp(txt);
    show(txt);

    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(rp, zero_line)
{
    text txt = create_text();
    append_line(txt, "0 lool\n");
    append_line(txt, "1 lool\n");
    append_line(txt, "2 lool\n");

    std::string output_text = "";

    output_text += "|0 lool\n";
    output_text += "1 lool\n";
    output_text += "2 lool\n";

    testing::internal::CaptureStdout();

    m(txt, 0, 0);
    rp(txt);
    show(txt);

    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

