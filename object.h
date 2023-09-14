#ifndef __object_h
#define __object_h

class Object {
public:
    int getValue();
    void setValue(int value);

private:
    int m_value;
};

#endif