#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(showodd, norm)
{
    text txt = create_text();

    append_line(txt, "lool lol\n");
    append_line(txt, "lool lool\n");
    append_line(txt, "lool loool\n");
    append_line(txt, "lool looool\n");

    std::string output_text = "";

    output_text += "lool lol \n";
    output_text += "lool loool\n";

    testing::internal::CaptureStdout();

    m(txt, 0, 1);
    showlenght(txt);

    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(showodd, zero)
{
     text txt = create_text();

     append_line(txt, "\n");
     append_line(txt, "\n");
     append_line(txt, "\n");

     std::string output_text = "";

     output_text += "\n";

     testing::internal::CaptureStdout();

     m(txt, 0, 1);
     showlenght(txt);

     std::string text = testing::internal::GetCapturedStdout();

     EXPECT_STREQ(text.c_str(), output_text.c_str());
}

