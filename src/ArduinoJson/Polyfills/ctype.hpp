// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once
#ifdef isdigit
#undef isdigit
#endif
namespace ArduinoJson {
    namespace Internals {

        inline bool isdigit(char c) {
          return '0' <= c && c <= '9';
        }

        inline bool issign(char c) {
          return '-' == c || c == '+';
        }
    }
}
