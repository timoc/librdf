/* This is free and unencumbered software released into the public domain. */

#ifndef RDFXX_FORMAT_H
#define RDFXX_FORMAT_H

#include <string> /* for std::string */

////////////////////////////////////////////////////////////////////////////////

namespace rdf {
  struct format {
    const char* const content_type;
    const char* const charset;
    const char* const file_extension;
    const char* const module_name;
    const char* const parser_name;
    const char* const serializer_name;

    static inline bool supported(const std::string& content_type) {
      return supported(content_type.c_str());
    }

    static bool supported(const char* content_type);

    static const format* find_for_content_type(const std::string& content_type) {
      return find_for_content_type(content_type.c_str());
    }

    static const format* find_for_content_type(const char* content_type);

    static const format* find_for_file_extension(const std::string& file_extension) {
      return find_for_file_extension(file_extension.c_str());
    }

    static const format* find_for_file_extension(const char* file_extension);

    static const format* find_for_file_path(const std::string& file_path) {
      return find_for_file_path(file_path.c_str());
    }

    static const format* find_for_file_path(const char* file_path);
  };
}

////////////////////////////////////////////////////////////////////////////////

#endif /* RDFXX_FORMAT_H */
