#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(p1, norm)
{
    text txt = create_text();

    append_line(txt, "0 lool\n");
    append_line(txt, "1 lool\n");

    std::string output_text = "";

    output_text += " ";
    output_text += "|0 lool\n";
    output_text += "1 lool\n";

    testing::internal::CaptureStdout();

    m(txt, 0, 0);
    mnwbf(txt);
    show(txt);

    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}




