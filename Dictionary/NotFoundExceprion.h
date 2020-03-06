#ifndef NOTFOUNDEXCEPRION_H
#define NOTFOUNDEXCEPRION_H
#include <iostream>

template<class TKey>
class NotFoundException : public std::exception
{
public:
    virtual const TKey& GetKey() const noexcept = 0;
};

#endif // NOTFOUNDEXCEPRION_H
