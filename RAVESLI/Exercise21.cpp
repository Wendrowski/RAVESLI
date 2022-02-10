#pragma once
#include <iostream>

namespace FlagsArticle
{
    // bits definition
    constexpr unsigned char option_viewed = 0x01;
    constexpr unsigned char option_edited = 0x02;
    constexpr unsigned char option_favorited = 0x04;
    constexpr unsigned char option_shared = 0x08;
    constexpr unsigned char option_deleted = 0x80;
}

class BitFlagsArticle
{
public:
    BitFlagsArticle();
    explicit BitFlagsArticle(unsigned char flags);
    void setFlags(unsigned char flags);
    void unsetFlags(unsigned char flags);
    void flipFlags(unsigned char flags);

    inline unsigned char getFlags() const { return mArticleFlags; }


private:
    unsigned char mArticleFlags;
};

std::ostream& operator<<(std::ostream& os, const BitFlagsArticle& article);