#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "common.h"
#include "text.h"
#include "_text.h"

TEST(m, normal)
{
    text txt = create_text();
    txt->myList.push_back("0 lool\n");
    txt->myList.push_back("1 lool\n");
    txt->myList.push_back("2 lool\n");

    txt->cursor->line_num = 0;
    txt->cursor->position = 0;

    m(txt, 0, 0);
    EXPECT_EQ(txt->cursor->line, txt->myList.begin());
    EXPECT_EQ(txt->cursor->position, 0);

    free(txt);
}

TEST(m, norma1l)
{
    text txt = create_text();
    txt->myList.push_back("0 lool\n");
    txt->myList.push_back("1 lool\n");
    txt->myList.push_back("2 lool\n");

    txt->cursor->line_num = 0;
    txt->cursor->position = 0;

    m(txt, 2, 1);
    EXPECT_EQ(txt->cursor->line_num, 2);
    EXPECT_EQ(txt->cursor->position, 1);

    free(txt);
}


TEST(m, big)
{
    text txt = create_text();
    txt->myList.push_back("0 lool\n");
    txt->myList.push_back("1 lool\n");
    txt->myList.push_back("2 lool\n");

    txt->cursor->line_num = 0;
    txt->cursor->position = 0;


    m(txt, 1000, 0);
    EXPECT_EQ(txt->cursor->line_num, 0);
    EXPECT_EQ(txt->cursor->position, 0);
}

TEST(m, big)
{
    text txt = create_text();
    txt->myList.push_back("0 lool\n");
    txt->myList.push_back("1 lool\n");
    txt->myList.push_back("2 lool\n");

    txt->cursor->line_num = 0;
    txt->cursor->position = 0;

    m(txt, 1000, 1000);
    EXPECT_EQ(txt->cursor->line_num, 0);
    EXPECT_EQ(txt->cursor->position, 0);
}
TEST(m, big)
{
    text txt = create_text();
    txt->myList.push_back("0 lool\n");
    txt->myList.push_back("1 lool\n");
    txt->myList.push_back("2 lool\n");

    txt->cursor->line_num = 0;
    txt->cursor->position = 0;


    m(txt, 0, 1000);
    EXPECT_EQ(txt->cursor->line_num, 0);
    EXPECT_EQ(txt->cursor->position, 7);
    free(txt);
}
