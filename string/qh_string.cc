#include "qh_string.h"

#include <string.h>

namespace qh
{
    // TODO ��������дʵ�ִ���

    string::string()
        : data_(NULL), len_(0)
    {
    }

    string::string( const char* s )
    {
    }

    string::string( const char* s, size_t len )
    {
        cout<<"hello world"<<endl;
    }

    string::string( const string& rhs )
    {

    }

    string& string::operator=( const string& rhs )
    {
        return *this;
    }

    string::~string()
    {

    }

    size_t string::size() const
    {
        return len_;
    }

    const char* string::data() const
    {
        return NULL;
    }

    const char* string::c_str() const
    {
        return NULL;
    }

    char* string::operator[]( size_t index )
    {
        return NULL;
    }
}
