#ifndef WEIGHTEDWORD_H
#define WEIGHTEDWORD_H

#include <iostream>

using namespace std;

class WeightedWord {
public:
    size_t m_weight;

    size_t m_ID;

public:
    bool operator==(WeightedWord &_snd) {
        return m_ID == _snd.m_ID;
    }

    bool operator<(WeightedWord &_snd) {
        return m_weight < _snd.m_weight;
    }

    friend ostream &operator<<(ostream &_os, WeightedWord &_obj) {
        _os << _obj.m_ID << ": " << _obj.m_weight << endl;
        return _os;
    }
};

#endif // WEIGHTEDWORD_H
