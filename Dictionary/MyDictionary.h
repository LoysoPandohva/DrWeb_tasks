#ifndef MY_DICTIONARY_H
#define MY_DICTIONARY_H
#include "Dictionary.h"
#include "MyNotFoundException.h"

#include <iostream>
#include <map>

template<class TKey, class TValue>
class MyDictionary: public Dictionary<TKey,TValue>
{
public:
    ~MyDictionary() override = default;

    const TValue& Get(const TKey& key) const override
    {
        if(!IsSet(key)) throw MyNotFoundException<TKey>(key);
        return dictionary.find(key)->second;
    }
    void Set(const TKey& key, const TValue& value) override
    {
        dictionary[key] = value;
    }
    virtual bool IsSet(const TKey& key) const override
    {
        if(dictionary.find(key) == dictionary.end()) return false;
        else return true;
    }

private:
    std::map<TKey, TValue> dictionary;
};

#endif // MY_DICTIONARY_H
