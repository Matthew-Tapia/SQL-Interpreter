#ifndef TOKENIZER_CONSTANTS_H
#define TOKENIZER_CONSTANTS_H

const int MAX_COLUMNS = 256;
const int MAX_ROWS = 100;
const int MAX_BUFFER = 200;

const char ALFA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char DIGITS[] = "0123456789";
const char OPERATORS[] = "><=!";
const char SPACES[] = {' ', '\t', '\n', '\0'};

// token types
enum STRING_TOKEN_TYPES {
  TOKEN_ALPHA,
  TOKEN_NUMBER,
  TOKEN_SPACE,
  TOKEN_OPERATOR,
  TOKEN_COMMA,
  TOKEN_PARENTH,
  TOKEN_STAR,
  TOKEN_STRING,
  TOKEN_UNKNOWN = -1
};

// keywords
enum SQL_KEYWORDS {
  SQL_CREATE,
  SQL_TABLE,
  SQL_FIELDS,
  SQL_INSERT,
  SQL_INTO,
  SQL_VALUES,
  SQL_SELECT,
  SQL_FROM,
  SQL_WHERE,
  SQL_AND,
  SQL_OR,
  SQL_NOT,
  SQL_WORD,
  SQL_NUMBER,
  SQL_STRING,
  SQL_COMMA,
  SQL_OPERATOR,
  SQL_LEFT_PARENTH,
  SQL_RIGHT_PARENT,
  SQL_SPACE,
  SQL_STAR,
  SQL_UNKNOWN = -1
};

#endif // TOKENIZER_CONSTANTS_H