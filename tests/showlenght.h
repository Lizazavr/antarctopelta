#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(showlenght, norm)
{
    text txt = create_text();

    append_line(txt, "line \n");
    append_line(txt, "line 2\n");
    append_line(txt, "line 22\n");

    std::string output_text = "";

    output_text += "line \n";
    output_text += "line 22\n";

    testing::internal::CaptureStdout();

    m(txt, 0, 1);
    showlenght(txt);

    std::string text = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(text.c_str(), output_text.c_str());
}

TEST(showlenght, zero)
{
     text txt = create_text();

     append_line(txt, "\n");
     append_line(txt, "\n");
     append_line(txt, "\n");

     std::string output_text = "";

     output_text += "\n";
     output_text += "\n";

     testing::internal::CaptureStdout();

     m(txt, 0, 1);
     showlenght(txt);

     std::string text = testing::internal::GetCapturedStdout();

     EXPECT_STREQ(text.c_str(), output_text.c_str());
}

