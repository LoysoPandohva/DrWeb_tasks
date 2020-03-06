#ifndef MYNOTFOUNDEXCEPTION_H
#define MYNOTFOUNDEXCEPTION_H
#include "NotFoundExceprion.h"

template<class TKey>
class MyNotFoundException : public NotFoundException<TKey>
{
public:
    MyNotFoundException(const TKey& key):key(key){}

    const TKey& GetKey() const noexcept override
    {
        return key;
    }

private:
    const TKey &key;
};

#endif // MYNOTFOUNDEXCEPTION_H
